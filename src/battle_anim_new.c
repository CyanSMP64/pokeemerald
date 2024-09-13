#include "global.h"
#include "battle_anim.h"
#include "item_menu_icons.h"
#include "sprite.h"
#include "random.h"
#include "gpu_regs.h"
#include "item.h"
#include "rtc.h"
#include "item_icon.h"
#include "sound.h"
#include "menu.h"
#include "malloc.h"
#include "util.h"
#include "trig.h"
#include "graphics.h"
#include "battle_scripts.h"
#include "battle_controllers.h"
#include "constants/moves.h"
#include "constants/hold_effects.h"
#include "constants/items.h"
#include "constants/pokemon.h"
#include "battle_util.h"
#include "constants/songs.h"

// const data
// general
static const union AffineAnimCmd sSquishTargetAffineAnimCmds[] =
{
    AFFINEANIMCMD_FRAME(0, 64, 0, 16), //Flatten
    AFFINEANIMCMD_FRAME(0, 0, 0, 64),
    AFFINEANIMCMD_FRAME(0, -64, 0, 16),
    AFFINEANIMCMD_END,
};

//fairy wind
const struct SpriteTemplate gFairyWindCloudTemplate =
{
    .tileTag = ANIM_TAG_PINK_CLOUD,
    .paletteTag = ANIM_TAG_PINK_CLOUD,
    .oam = &gOamData_AffineNormal_ObjNormal_32x32,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gSwiftStarAffineAnimTable,
    .callback = AnimTranslateLinearSingleSineWave
};
