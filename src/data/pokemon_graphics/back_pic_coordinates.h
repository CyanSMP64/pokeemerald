// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonBackPicCoords[] =
{
    [SPECIES_NONE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BULBASAUR] =
    {
        .size = 0x64,
        .y_offset = 0x10,
    },
    [SPECIES_IVYSAUR] =
    {
        .size = 0x76,
        .y_offset = 0x0a,
    },
    [SPECIES_VENUSAUR] =
    {
        .size = 0x86,
        .y_offset = 0x0a,
    },
    [SPECIES_CHARMANDER] =
    {
        .size = 0x66,
        .y_offset = 0x0a,
    },
    [SPECIES_CHARMELEON] =
    {
        .size = 0x77,
        .y_offset = 0x07,
    },
    [SPECIES_CHARIZARD] =
    {
        .size = 0x87,
        .y_offset = 0x04,
    },
    [SPECIES_SQUIRTLE] =
    {
        .size = 0x75,
        .y_offset = 0x0f,
    },
    [SPECIES_WARTORTLE] =
    {
        .size = 0x86,
        .y_offset = 0x0a,
    },
    [SPECIES_BLASTOISE] =
    {
        .size = 0x86,
        .y_offset = 0x0a,
    },
    [SPECIES_CATERPIE] =
    {
        .size = 0x55,
        .y_offset = 0x0f,
    },
    [SPECIES_METAPOD] =
    {
        .size = 0x65,
        .y_offset = 0x0c,
    },
    [SPECIES_BUTTERFREE] =
    {
        .size = 0x87,
        .y_offset = 0x04,
    },
    [SPECIES_WEEDLE] =
    {
        .size = 0x56,
        .y_offset = 0x0b,
    },
    [SPECIES_KAKUNA] =
    {
        .size = 0x46,
        .y_offset = 0x0a,
    },
    [SPECIES_BEEDRILL] =
    {
        .size = 0x86,
        .y_offset = 0x09,
    },
    [SPECIES_PIDGEY] =
    {
        .size = 0x66,
        .y_offset = 0x08,
    },
    [SPECIES_PIDGEOTTO] =
    {
        .size = 0x85,
        .y_offset = 0x0c,
    },
    [SPECIES_PIDGEOT] =
    {
        .size = 0x87,
        .y_offset = 0x06,
    },
    [SPECIES_RATTATA] =
    {
        .size = 0x75,
        .y_offset = 0x0d,
    },
    [SPECIES_RATICATE] =
    {
        .size = 0x75,
        .y_offset = 0x0d,
    },
    [SPECIES_SPEAROW] =
    {
        .size = 0x65,
        .y_offset = 0x0c,
    },
    [SPECIES_FEAROW] =
    {
        .size = 0x87,
        .y_offset = 0x05,
    },
    [SPECIES_EKANS] =
    {
        .size = 0x66,
        .y_offset = 0x09,
    },
    [SPECIES_ARBOK] =
    {
        .size = 0x77,
        .y_offset = 0x04,
    },
    [SPECIES_PIKACHU] =
    {
        .size = 0x77,
        .y_offset = 0x07,
    },
    [SPECIES_RAICHU] =
    {
        .size = 0x66,
        .y_offset = 0x08,
    },
    [SPECIES_SANDSHREW] =
    {
        .size = 0x65,
        .y_offset = 0x0d,
    },
    [SPECIES_SANDSLASH] =
    {
        .size = 0x86,
        .y_offset = 0x09,
    },
    [SPECIES_NIDORAN_F] =
    {
        .size = 0x55,
        .y_offset = 0x0c,
    },
    [SPECIES_NIDORINA] =
    {
        .size = 0x86,
        .y_offset = 0x0a,
    },
    [SPECIES_NIDOQUEEN] =
    {
        .size = 0x77,
        .y_offset = 0x06,
    },
    [SPECIES_NIDORAN_M] =
    {
        .size = 0x56,
        .y_offset = 0x08,
    },
    [SPECIES_NIDORINO] =
    {
        .size = 0x86,
        .y_offset = 0x09,
    },
    [SPECIES_NIDOKING] =
    {
        .size = 0x88,
        .y_offset = 0x03,
    },
    [SPECIES_CLEFAIRY] =
    {
        .size = 0x65,
        .y_offset = 0x0d,
    },
    [SPECIES_CLEFABLE] =
    {
        .size = 0x76,
        .y_offset = 0x0a,
    },
    [SPECIES_VULPIX] =
    {
        .size = 0x76,
        .y_offset = 0x09,
    },
    [SPECIES_NINETALES] =
    {
        .size = 0x87,
        .y_offset = 0x04,
    },
    [SPECIES_JIGGLYPUFF] =
    {
        .size = 0x65,
        .y_offset = 0x0d,
    },
    [SPECIES_WIGGLYTUFF] =
    {
        .size = 0x66,
        .y_offset = 0x08,
    },
    [SPECIES_ZUBAT] =
    {
        .size = 0x76,
        .y_offset = 0x0b,
    },
    [SPECIES_GOLBAT] =
    {
        .size = 0x87,
        .y_offset = 0x06,
    },
    [SPECIES_ODDISH] =
    {
        .size = 0x66,
        .y_offset = 0x08,
    },
    [SPECIES_GLOOM] =
    {
        .size = 0x76,
        .y_offset = 0x0b,
    },
    [SPECIES_VILEPLUME] =
    {
        .size = 0x87,
        .y_offset = 0x07,
    },
    [SPECIES_PARAS] =
    {
        .size = 0x63,
        .y_offset = 0x14,
    },
    [SPECIES_PARASECT] =
    {
        .size = 0x87,
        .y_offset = 0x07,
    },
    [SPECIES_VENONAT] =
    {
        .size = 0x77,
        .y_offset = 0x06,
    },
    [SPECIES_VENOMOTH] =
    {
        .size = 0x77,
        .y_offset = 0x04,
    },
    [SPECIES_DIGLETT] =
    {
        .size = 0x54,
        .y_offset = 0x10,
    },
    [SPECIES_DUGTRIO] =
    {
        .size = 0x66,
        .y_offset = 0x0b,
    },
    [SPECIES_MEOWTH] =
    {
        .size = 0x65,
        .y_offset = 0x0c,
    },
    [SPECIES_PERSIAN] =
    {
        .size = 0x87,
        .y_offset = 0x07,
    },
    [SPECIES_PSYDUCK] =
    {
        .size = 0x67,
        .y_offset = 0x07,
    },
    [SPECIES_GOLDUCK] =
    {
        .size = 0x77,
        .y_offset = 0x05,
    },
    [SPECIES_MANKEY] =
    {
        .size = 0x76,
        .y_offset = 0x0b,
    },
    [SPECIES_PRIMEAPE] =
    {
        .size = 0x77,
        .y_offset = 0x07,
    },
    [SPECIES_GROWLITHE] =
    {
        .size = 0x66,
        .y_offset = 0x08,
    },
    [SPECIES_ARCANINE] =
    {
        .size = 0x87,
        .y_offset = 0x06,
    },
    [SPECIES_POLIWAG] =
    {
        .size = 0x74,
        .y_offset = 0x10,
    },
    [SPECIES_POLIWHIRL] =
    {
        .size = 0x65,
        .y_offset = 0x0d,
    },
    [SPECIES_POLIWRATH] =
    {
        .size = 0x86,
        .y_offset = 0x0a,
    },
    [SPECIES_ABRA] =
    {
        .size = 0x55,
        .y_offset = 0x0c,
    },
    [SPECIES_KADABRA] =
    {
        .size = 0x86,
        .y_offset = 0x09,
    },
    [SPECIES_ALAKAZAM] =
    {
        .size = 0x87,
        .y_offset = 0x06,
    },
    [SPECIES_MACHOP] =
    {
        .size = 0x65,
        .y_offset = 0x0c,
    },
    [SPECIES_MACHOKE] =
    {
        .size = 0x76,
        .y_offset = 0x09,
    },
    [SPECIES_MACHAMP] =
    {
        .size = 0x67,
        .y_offset = 0x04,
    },
    [SPECIES_BELLSPROUT] =
    {
        .size = 0x66,
        .y_offset = 0x0a,
    },
    [SPECIES_WEEPINBELL] =
    {
        .size = 0x66,
        .y_offset = 0x09,
    },
    [SPECIES_VICTREEBEL] =
    {
        .size = 0x87,
        .y_offset = 0x06,
    },
    [SPECIES_TENTACOOL] =
    {
        .size = 0x56,
        .y_offset = 0x0a,
    },
    [SPECIES_TENTACRUEL] =
    {
        .size = 0x86,
        .y_offset = 0x0b,
    },
    [SPECIES_GEODUDE] =
    {
        .size = 0x66,
        .y_offset = 0x0b,
    },
    [SPECIES_GRAVELER] =
    {
        .size = 0x75,
        .y_offset = 0x0c,
    },
    [SPECIES_GOLEM] =
    {
        .size = 0x84,
        .y_offset = 0x10,
    },
    [SPECIES_PONYTA] =
    {
        .size = 0x66,
        .y_offset = 0x09,
    },
    [SPECIES_RAPIDASH] =
    {
        .size = 0x87,
        .y_offset = 0x05,
    },
    [SPECIES_SLOWPOKE] =
    {
        .size = 0x85,
        .y_offset = 0x0e,
    },
    [SPECIES_SLOWBRO] =
    {
        .size = 0x86,
        .y_offset = 0x0a,
    },
    [SPECIES_MAGNEMITE] =
    {
        .size = 0x43,
        .y_offset = 0x14,
    },
    [SPECIES_MAGNETON] =
    {
        .size = 0x66,
        .y_offset = 0x0a,
    },
    [SPECIES_FARFETCHD] =
    {
        .size = 0x66,
        .y_offset = 0x0a,
    },
    [SPECIES_DODUO] =
    {
        .size = 0x66,
        .y_offset = 0x08,
    },
    [SPECIES_DODRIO] =
    {
        .size = 0x88,
        .y_offset = 0x01,
    },
    [SPECIES_SEEL] =
    {
        .size = 0x66,
        .y_offset = 0x0a,
    },
    [SPECIES_DEWGONG] =
    {
        .size = 0x77,
        .y_offset = 0x05,
    },
    [SPECIES_GRIMER] =
    {
        .size = 0x75,
        .y_offset = 0x0d,
    },
    [SPECIES_MUK] =
    {
        .size = 0x85,
        .y_offset = 0x0d,
    },
    [SPECIES_SHELLDER] =
    {
        .size = 0x76,
        .y_offset = 0x0b,
    },
    [SPECIES_CLOYSTER] =
    {
        .size = 0x87,
        .y_offset = 0x06,
    },
    [SPECIES_GASTLY] =
    {
        .size = 0x85,
        .y_offset = 0x0e,
    },
    [SPECIES_HAUNTER] =
    {
        .size = 0x76,
        .y_offset = 0x09,
    },
    [SPECIES_GENGAR] =
    {
        .size = 0x86,
        .y_offset = 0x0a,
    },
    [SPECIES_ONIX] =
    {
        .size = 0x78,
        .y_offset = 0x00,
    },
    [SPECIES_DROWZEE] =
    {
        .size = 0x65,
        .y_offset = 0x0d,
    },
    [SPECIES_HYPNO] =
    {
        .size = 0x66,
        .y_offset = 0x09,
    },
    [SPECIES_KRABBY] =
    {
        .size = 0x66,
        .y_offset = 0x0a,
    },
    [SPECIES_KINGLER] =
    {
        .size = 0x77,
        .y_offset = 0x04,
    },
    [SPECIES_VOLTORB] =
    {
        .size = 0x55,
        .y_offset = 0x0e,
    },
    [SPECIES_ELECTRODE] =
    {
        .size = 0x65,
        .y_offset = 0x0d,
    },
    [SPECIES_EXEGGCUTE] =
    {
        .size = 0x65,
        .y_offset = 0x0d,
    },
    [SPECIES_EXEGGUTOR] =
    {
        .size = 0x87,
        .y_offset = 0x07,
    },
    [SPECIES_CUBONE] =
    {
        .size = 0x76,
        .y_offset = 0x0a,
    },
    [SPECIES_MAROWAK] =
    {
        .size = 0x66,
        .y_offset = 0x08,
    },
    [SPECIES_HITMONLEE] =
    {
        .size = 0x65,
        .y_offset = 0x0c,
    },
    [SPECIES_HITMONCHAN] =
    {
        .size = 0x65,
        .y_offset = 0x0c,
    },
    [SPECIES_LICKITUNG] =
    {
        .size = 0x85,
        .y_offset = 0x0e,
    },
    [SPECIES_KOFFING] =
    {
        .size = 0x66,
        .y_offset = 0x09,
    },
    [SPECIES_WEEZING] =
    {
        .size = 0x85,
        .y_offset = 0x0c,
    },
    [SPECIES_RHYHORN] =
    {
        .size = 0x85,
        .y_offset = 0x0c,
    },
    [SPECIES_RHYDON] =
    {
        .size = 0x88,
        .y_offset = 0x03,
    },
    [SPECIES_CHANSEY] =
    {
        .size = 0x85,
        .y_offset = 0x0e,
    },
    [SPECIES_TANGELA] =
    {
        .size = 0x85,
        .y_offset = 0x0e,
    },
    [SPECIES_KANGASKHAN] =
    {
        .size = 0x77,
        .y_offset = 0x05,
    },
    [SPECIES_HORSEA] =
    {
        .size = 0x66,
        .y_offset = 0x09,
    },
    [SPECIES_SEADRA] =
    {
        .size = 0x66,
        .y_offset = 0x08,
    },
    [SPECIES_GOLDEEN] =
    {
        .size = 0x66,
        .y_offset = 0x08,
    },
    [SPECIES_SEAKING] =
    {
        .size = 0x76,
        .y_offset = 0x0b,
    },
    [SPECIES_STARYU] =
    {
        .size = 0x75,
        .y_offset = 0x0d,
    },
    [SPECIES_STARMIE] =
    {
        .size = 0x85,
        .y_offset = 0x0e,
    },
    [SPECIES_MR_MIME] =
    {
        .size = 0x85,
        .y_offset = 0x0d,
    },
    [SPECIES_SCYTHER] =
    {
        .size = 0x87,
        .y_offset = 0x04,
    },
    [SPECIES_JYNX] =
    {
        .size = 0x85,
        .y_offset = 0x0d,
    },
    [SPECIES_ELECTABUZZ] =
    {
        .size = 0x66,
        .y_offset = 0x08,
    },
    [SPECIES_MAGMAR] =
    {
        .size = 0x77,
        .y_offset = 0x07,
    },
    [SPECIES_PINSIR] =
    {
        .size = 0x66,
        .y_offset = 0x09,
    },
    [SPECIES_TAUROS] =
    {
        .size = 0x85,
        .y_offset = 0x0d,
    },
    [SPECIES_MAGIKARP] =
    {
        .size = 0x76,
        .y_offset = 0x09,
    },
    [SPECIES_GYARADOS] =
    {
        .size = 0x88,
        .y_offset = 0x00,
    },
    [SPECIES_LAPRAS] =
    {
        .size = 0x77,
        .y_offset = 0x04,
    },
    [SPECIES_DITTO] =
    {
        .size = 0x54,
        .y_offset = 0x11,
    },
    [SPECIES_EEVEE] =
    {
        .size = 0x66,
        .y_offset = 0x0a,
    },
    [SPECIES_VAPOREON] =
    {
        .size = 0x66,
        .y_offset = 0x0a,
    },
    [SPECIES_JOLTEON] =
    {
        .size = 0x87,
        .y_offset = 0x06,
    },
    [SPECIES_FLAREON] =
    {
        .size = 0x67,
        .y_offset = 0x05,
    },
    [SPECIES_PORYGON] =
    {
        .size = 0x65,
        .y_offset = 0x0d,
    },
    [SPECIES_OMANYTE] =
    {
        .size = 0x66,
        .y_offset = 0x0a,
    },
    [SPECIES_OMASTAR] =
    {
        .size = 0x66,
        .y_offset = 0x08,
    },
    [SPECIES_KABUTO] =
    {
        .size = 0x65,
        .y_offset = 0x0d,
    },
    [SPECIES_KABUTOPS] =
    {
        .size = 0x77,
        .y_offset = 0x05,
    },
    [SPECIES_AERODACTYL] =
    {
        .size = 0x86,
        .y_offset = 0x08,
    },
    [SPECIES_SNORLAX] =
    {
        .size = 0x86,
        .y_offset = 0x0b,
    },
    [SPECIES_ARTICUNO] =
    {
        .size = 0x65,
        .y_offset = 0x0c,
    },
    [SPECIES_ZAPDOS] =
    {
        .size = 0x76,
        .y_offset = 0x0b,
    },
    [SPECIES_MOLTRES] =
    {
        .size = 0x87,
        .y_offset = 0x04,
    },
    [SPECIES_DRATINI] =
    {
        .size = 0x66,
        .y_offset = 0x09,
    },
    [SPECIES_DRAGONAIR] =
    {
        .size = 0x78,
        .y_offset = 0x00,
    },
    [SPECIES_DRAGONITE] =
    {
        .size = 0x87,
        .y_offset = 0x06,
    },
    [SPECIES_MEWTWO] =
    {
        .size = 0x78,
        .y_offset = 0x01,
    },
    [SPECIES_MEW] =
    {
        .size = 0x88,
        .y_offset = 0x01,
    },
    [SPECIES_CHIKORITA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_BAYLEEF] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_MEGANIUM] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_CYNDAQUIL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_QUILAVA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_TYPHLOSION] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_TOTODILE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_CROCONAW] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_FERALIGATR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SENTRET] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_FURRET] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_HOOTHOOT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_NOCTOWL] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_LEDYBA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_LEDIAN] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_SPINARAK] =
    {
        .size = MON_COORDS_SIZE(56, 24),
        .y_offset = 21,
    },
    [SPECIES_ARIADOS] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_CROBAT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_CHINCHOU] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_LANTURN] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_PICHU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_CLEFFA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_IGGLYBUFF] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_TOGEPI] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_TOGETIC] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_NATU] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_XATU] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_MAREEP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_FLAAFFY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_AMPHAROS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BELLOSSOM] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_MARILL] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 12,
    },
    [SPECIES_AZUMARILL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_SUDOWOODO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_POLITOED] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_HOPPIP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SKIPLOOM] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_JUMPLUFF] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_AIPOM] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SUNKERN] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_SUNFLORA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_YANMA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_WOOPER] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_QUAGSIRE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_ESPEON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_UMBREON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_MURKROW] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SLOWKING] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_MISDREAVUS] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN] =
    {
        .size = MON_COORDS_SIZE(24, 48),
        .y_offset = 8,
    },
    [SPECIES_WOBBUFFET] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 12,
    },
    [SPECIES_GIRAFARIG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_PINECO] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_FORRETRESS] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 16,
    },
    [SPECIES_DUNSPARCE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_GLIGAR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_STEELIX] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SNUBBULL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_GRANBULL] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_QWILFISH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_SCIZOR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_SHUCKLE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_HERACROSS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_SNEASEL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_TEDDIURSA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_URSARING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_SLUGMA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_MAGCARGO] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_SWINUB] =
    {
        .size = MON_COORDS_SIZE(48, 24),
        .y_offset = 21,
    },
    [SPECIES_PILOSWINE] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_CORSOLA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_REMORAID] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_OCTILLERY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_DELIBIRD] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_MANTINE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_SKARMORY] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_HOUNDOUR] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_HOUNDOOM] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_KINGDRA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_PHANPY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_DONPHAN] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_PORYGON2] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_STANTLER] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_SMEARGLE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_TYROGUE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_HITMONTOP] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_SMOOCHUM] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_ELEKID] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_MAGBY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_MILTANK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_BLISSEY] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_RAIKOU] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_ENTEI] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_SUICUNE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_LARVITAR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_PUPITAR] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_TYRANITAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LUGIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_HO_OH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CELEBI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_OLD_UNOWN_B] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_C] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_D] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_E] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_F] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_G] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_H] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_I] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_J] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_K] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_L] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_M] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_N] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_O] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_P] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_Q] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_R] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_S] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_T] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_U] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_V] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_W] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_X] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_Y] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_Z] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_TREECKO] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_GROVYLE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_SCEPTILE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_TORCHIC] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_COMBUSKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BLAZIKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MUDKIP] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_MARSHTOMP] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_SWAMPERT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_POOCHYENA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_MIGHTYENA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_ZIGZAGOON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_LINOONE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_WURMPLE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_SILCOON] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 21,
    },
    [SPECIES_BEAUTIFLY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CASCOON] =
    {
        .size = MON_COORDS_SIZE(56, 24),
        .y_offset = 20,
    },
    [SPECIES_DUSTOX] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 20,
    },
    [SPECIES_LOTAD] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 15,
    },
    [SPECIES_LOMBRE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_LUDICOLO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SEEDOT] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_NUZLEAF] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_SHIFTRY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_NINCADA] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 20,
    },
    [SPECIES_NINJASK] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_SHEDINJA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_TAILLOW] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 17,
    },
    [SPECIES_SWELLOW] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_SHROOMISH] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_BRELOOM] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_SPINDA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_WINGULL] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 14,
    },
    [SPECIES_PELIPPER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_SURSKIT] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_MASQUERAIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_WAILMER] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 21,
    },
    [SPECIES_WAILORD] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 22,
    },
    [SPECIES_SKITTY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_DELCATTY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_KECLEON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_BALTOY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_CLAYDOL] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_NOSEPASS] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 12,
    },
    [SPECIES_TORKOAL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SABLEYE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_BARBOACH] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_WHISCASH] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_LUVDISC] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_CORPHISH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_CRAWDAUNT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_FEEBAS] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_MILOTIC] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_CARVANHA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_SHARPEDO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_TRAPINCH] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 14,
    },
    [SPECIES_VIBRAVA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 17,
    },
    [SPECIES_FLYGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_MAKUHITA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_HARIYAMA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_ELECTRIKE] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 16,
    },
    [SPECIES_MANECTRIC] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_NUMEL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_CAMERUPT] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 19,
    },
    [SPECIES_SPHEAL] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 18,
    },
    [SPECIES_SEALEO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_WALREIN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_CACNEA] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_CACTURNE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_SNORUNT] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_GLALIE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 12,
    },
    [SPECIES_LUNATONE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_SOLROCK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_AZURILL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SPOINK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_GRUMPIG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_PLUSLE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_MINUN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_MAWILE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_MEDITITE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_MEDICHAM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_SWABLU] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_ALTARIA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_WYNAUT] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_DUSKULL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_DUSCLOPS] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_ROSELIA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_SLAKOTH] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_VIGOROTH] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SLAKING] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_GULPIN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SWALOT] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_TROPIUS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_WHISMUR] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_LOUDRED] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_EXPLOUD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_CLAMPERL] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_HUNTAIL] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_GOREBYSS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ABSOL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_SHUPPET] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_BANETTE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_SEVIPER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_ZANGOOSE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_RELICANTH] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_ARON] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_LAIRON] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 17,
    },
    [SPECIES_AGGRON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_CASTFORM] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_VOLBEAT] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_ILLUMISE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_LILEEP] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_CRADILY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_ANORITH] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 23,
    },
    [SPECIES_ARMALDO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_RALTS] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_KIRLIA] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 6,
    },
    [SPECIES_GARDEVOIR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_BAGON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_SHELGON] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_SALAMENCE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_BELDUM] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_METANG] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 16,
    },
    [SPECIES_METAGROSS] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 20,
    },
    [SPECIES_REGIROCK] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_REGICE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 14,
    },
    [SPECIES_REGISTEEL] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 14,
    },
    [SPECIES_KYOGRE] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 19,
    },
    [SPECIES_GROUDON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_RAYQUAZA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_LATIAS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_LATIOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_JIRACHI] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_DEOXYS] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_CHIMECHO] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 7,
    },
    [SPECIES_EGG] =
    {
        .size = MON_COORDS_SIZE(24, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_B] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_UNOWN_C] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_UNOWN_D] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_UNOWN_E] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_F] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_G] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 5,
    },
    [SPECIES_UNOWN_H] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_UNOWN_I] =
    {
        .size = MON_COORDS_SIZE(24, 56),
        .y_offset = 7,
    },
    [SPECIES_UNOWN_J] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_UNOWN_K] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_UNOWN_L] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_M] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_UNOWN_N] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_UNOWN_O] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_UNOWN_P] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_Q] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_UNOWN_R] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_UNOWN_S] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 4,
    },
    [SPECIES_UNOWN_T] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_UNOWN_U] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_UNOWN_V] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_UNOWN_W] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_UNOWN_X] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_UNOWN_Y] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_Z] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_EMARK] =
    {
        .size = MON_COORDS_SIZE(24, 56),
        .y_offset = 6,
    },
    [SPECIES_UNOWN_QMARK] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 6,
    },
};

