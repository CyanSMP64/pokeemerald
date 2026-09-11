#include "global.h"
#include "malloc.h"
#include "decompress.h"
#include "ereader_helpers.h"
#include "link.h"
#include "main.h"
#include "mystery_gift_menu.h"
#include "mystery_gift_client.h"
#include "save.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "strings.h"
#include "util.h"
#include "constants/songs.h"

// Equivalent to MysteryGiftTaskData
struct EReaderTaskData
{
    u16 timer;
    u16 unused1;
    u16 unused2;
    u16 unused3;
    u8 state;
    u8 textState;
    u8 unused4;
    u8 unused5;
    u8 unused6;
    u8 unused7;
    u8 status;
    u8 *unusedBuffer;
};

struct EReaderData
{
    u16 status;
    u32 size;
    u32 *data;
};

struct EReaderData gEReaderData;

static void EReader_Load(struct EReaderData *eReader, int size, u32 *data)
{
    volatile u16 backupIME = REG_IME;
    REG_IME = 0;
    gIntrTable[1] = EReaderHelper_SerialCallback;
    gIntrTable[2] = EReaderHelper_Timer3Callback;
    EReaderHelper_SaveRegsState();
    EReaderHelper_ClearSendRecvMgr();
    REG_IE |= INTR_FLAG_VCOUNT;
    REG_IME = backupIME;
    eReader->status = 0;
    eReader->size = size;
    eReader->data = data;
}

static void EReader_Reset(struct EReaderData *eReader)
{
    volatile u16 backupIME = REG_IME;
    REG_IME = 0;
    EReaderHelper_ClearSendRecvMgr();
    EReaderHelper_RestoreRegsState();
    RestoreSerialTimer3IntrHandlers();
    REG_IME = backupIME;
}

// Return values for EReader_Transfer
enum {
    TRANSFER_ACTIVE,
    TRANSFER_SUCCESS,
    TRANSFER_CANCELED,
    TRANSFER_TIMEOUT,
};

static u8 EReader_Transfer(struct EReaderData *eReader)
{
    u8 transferStatus = TRANSFER_ACTIVE;
    eReader->status = EReaderHandleTransfer(TRUE, eReader->size, eReader->data, NULL);

    if ((eReader->status & EREADER_XFER_MASK) == 0 && eReader->status & EREADER_CHECKSUM_OK_MASK)
        transferStatus = TRANSFER_SUCCESS;

    if (eReader->status & EREADER_CANCEL_KEY_MASK)
        transferStatus = TRANSFER_CANCELED;

    if (eReader->status & EREADER_CANCEL_TIMEOUT_MASK)
        transferStatus = TRANSFER_TIMEOUT;

    gShouldAdvanceLinkState = 0;
    return transferStatus;
}

static void OpenEReaderLink(void)
{
    memset(gDecompressionBuffer, 0, 0x2000);
    gLinkType = LINKTYPE_EREADER_EM;
    OpenLink();
    SetSuppressLinkErrorMessage(TRUE);
}

static bool32 ValidateEReaderConnection(void)
{
    volatile u16 backupIME;
    u16 handshakes[MAX_LINK_PLAYERS];

    backupIME = REG_IME;
    REG_IME = 0;
    *(u64 *)handshakes = *(u64 *)gLink.handshakeBuffer;
    REG_IME = backupIME;

    // Validate that we are player 1, the EReader is player 2,
    // and that players 3 and 4 are empty.
    if (handshakes[0] == SLAVE_HANDSHAKE && handshakes[1] == EREADER_HANDSHAKE
     && handshakes[2] == 0xFFFF && handshakes[3] == 0xFFFF)
    {
        return TRUE;
    }

    return FALSE;
}

static bool32 IsChildConnected(void)
{
    if (IsLinkMaster() && GetLinkPlayerCount_2() == 2)
        return TRUE;

    return FALSE;
}

// States for TryReceiveCard
enum {
    RECV_STATE_INIT,
    RECV_STATE_WAIT_START,
    RECV_STATE_START,
    RECV_STATE_EXCHANGE,
    RECV_STATE_START_DISCONNECT,
    RECV_STATE_WAIT_DISCONNECT,
};

// Return values for TryReceiveCard
enum {
    RECV_ACTIVE,
    RECV_CANCELED,
    RECV_SUCCESS,
    RECV_ERROR,
    RECV_DISCONNECTED,
    RECV_TIMEOUT,
};

static u32 TryReceiveCard(u8 *state, u16 *timer)
{
    if (*state >= RECV_STATE_EXCHANGE
     && *state <= RECV_STATE_WAIT_DISCONNECT
     && HasLinkErrorOccurred())
    {
        // Return error status if an error occurs
        // during the link exchange.
        *state = 0;
        return RECV_ERROR;
    }

    switch (*state)
    {
    case RECV_STATE_INIT:
        if (IsLinkMaster() && GetLinkPlayerCount_2() > 1)
        {
            *state = RECV_STATE_WAIT_START;
        }
        else if (JOY_NEW(B_BUTTON))
        {
            *state = 0;
            return RECV_CANCELED;
        }
        break;
    case RECV_STATE_WAIT_START:
        if (++(*timer) > 5)
        {
            *timer = 0;
            *state = RECV_STATE_START;
        }
        break;
    case RECV_STATE_START:
        if (GetLinkPlayerCount_2() == 2)
        {
            PlaySE(SE_DING_DONG);
            CheckShouldAdvanceLinkState();
            *timer = 0;
            *state = RECV_STATE_EXCHANGE;
        }
        else if (JOY_NEW(B_BUTTON))
        {
            *state = 0;
            return RECV_CANCELED;
        }
        break;
    case RECV_STATE_EXCHANGE:
        if (++(*timer) > 30)
        {
            *state = 0;
            return RECV_TIMEOUT;
        }

        if (IsLinkConnectionEstablished())
        {
            if (gReceivedRemoteLinkPlayers)
            {
                if (IsLinkPlayerDataExchangeComplete())
                {
                    *state = 0;
                    return RECV_SUCCESS;
                }
                else
                {
                    *state = RECV_STATE_START_DISCONNECT;
                }
            }
            else
            {
                *state = RECV_STATE_EXCHANGE;
            }
        }
        break;
    case RECV_STATE_START_DISCONNECT:
        SetCloseLinkCallbackAndType(0);
        *state = RECV_STATE_WAIT_DISCONNECT;
        break;
    case RECV_STATE_WAIT_DISCONNECT:
        if (!gReceivedRemoteLinkPlayers)
        {
            *state = 0;
            return RECV_DISCONNECTED;
        }
        break;
    default:
        return RECV_ACTIVE;
    }

    return RECV_ACTIVE;
}

static void ResetTimer(u16 *timer)
{
    *timer = 0;
}

static bool32 UpdateTimer(u16 *timer, u16 time)
{
    if (++(*timer) > time)
    {
        // Timer has finished
        *timer = 0;
        return TRUE;
    }

    return FALSE;
}
