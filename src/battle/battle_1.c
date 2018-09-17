#include "global.h"
#include "data2.h"
#include "battle_setup.h"
#include "battle.h"
#include "trainer.h"
#include "graphics.h"
#include "gba/types.h"
#include "constants/species.h"
#include "constants/moves.h"
#include "constants/items.h"
#include "constants/opponents.h"

const struct MonCoords gTrainerBackPicCoords[] = {
    {8, 4},
    {8, 4},
    {8, 4},
};

extern const u8 gTrainerBackPic_Brendan[];
extern const u8 gTrainerBackPic_May[];
extern const u8 gTrainerBackPic_Wally[];

const struct CompressedSpriteSheet gTrainerBackPicTable[] = {
    {gTrainerBackPic_Brendan, 0x2000, 0},
    {gTrainerBackPic_May, 0x2000, 1},
    {gTrainerBackPic_Wally, 0x2000, 2}
};

extern const u8 gTrainerPalette_Brendan[];
extern const u8 gTrainerPalette_May[];
extern const u8 gTrainerPalette_Wally[];

const struct CompressedSpritePalette gTrainerBackPicPaletteTable[] = {
    {gTrainerPalette_Brendan, 0},
    {gTrainerPalette_May, 1},
    {gTrainerPalette_Wally, 2}
};

// This determines how much higher above the usual position the enemy Pokémon
// is during battle. Species that float or fly have nonzero values.
const u8 gEnemyMonElevation[] = {
	[0] =  0,
	[SPECIES_BULBASAUR] =  0,
	[SPECIES_IVYSAUR] =  0,
	[SPECIES_VENUSAUR] =  0,
	[SPECIES_CHARMANDER] =  0,
	[SPECIES_CHARMELEON] =  0,
	[SPECIES_CHARIZARD] =  0,
	[SPECIES_SQUIRTLE] =  0,
	[SPECIES_WARTORTLE] =  0,
	[SPECIES_BLASTOISE] =  0,
	[SPECIES_CATERPIE] =  0,
	[SPECIES_METAPOD] =  0,
	[SPECIES_BUTTERFREE] =  8,
	[SPECIES_WEEDLE] =  0,
	[SPECIES_KAKUNA] =  0,
	[SPECIES_BEEDRILL] =  8,
	[SPECIES_PIDGEY] = 16,
	[SPECIES_PIDGEOTTO] =  0,
	[SPECIES_PIDGEOT] =  4,
	[SPECIES_RATTATA] =  0,
	[SPECIES_RATICATE] =  0,
	[SPECIES_SPEAROW] =  0,
	[SPECIES_FEAROW] =  4,
	[SPECIES_EKANS] =  0,
	[SPECIES_ARBOK] =  0,
	[SPECIES_PIKACHU] =  0,
	[SPECIES_RAICHU] =  0,
	[SPECIES_SANDSHREW] =  0,
	[SPECIES_SANDSLASH] =  0,
	[SPECIES_NIDORAN_F] =  0,
	[SPECIES_NIDORINA] =  0,
	[SPECIES_NIDOQUEEN] =  0,
	[SPECIES_NIDORAN_M] =  0,
	[SPECIES_NIDORINO] =  0,
	[SPECIES_NIDOKING] =  0,
	[SPECIES_CLEFAIRY] =  0,
	[SPECIES_CLEFABLE] =  0,
	[SPECIES_VULPIX] =  0,
	[SPECIES_NINETALES] =  0,
	[SPECIES_JIGGLYPUFF] =  0,
	[SPECIES_WIGGLYTUFF] =  0,
	[SPECIES_ZUBAT] =  8,
	[SPECIES_GOLBAT] =  8,
	[SPECIES_ODDISH] =  0,
	[SPECIES_GLOOM] =  0,
	[SPECIES_VILEPLUME] =  0,
	[SPECIES_PARAS] =  0,
	[SPECIES_PARASECT] =  0,
	[SPECIES_VENONAT] =  0,
	[SPECIES_VENOMOTH] =  8,
	[SPECIES_DIGLETT] =  0,
	[SPECIES_DUGTRIO] =  0,
	[SPECIES_MEOWTH] =  0,
	[SPECIES_PERSIAN] =  0,
	[SPECIES_PSYDUCK] =  0,
	[SPECIES_GOLDUCK] =  0,
	[SPECIES_MANKEY] =  0,
	[SPECIES_PRIMEAPE] =  0,
	[SPECIES_GROWLITHE] =  0,
	[SPECIES_ARCANINE] =  0,
	[SPECIES_POLIWAG] =  0,
	[SPECIES_POLIWHIRL] =  0,
	[SPECIES_POLIWRATH] =  0,
	[SPECIES_ABRA] =  0,
	[SPECIES_KADABRA] =  0,
	[SPECIES_ALAKAZAM] =  0,
	[SPECIES_MACHOP] =  0,
	[SPECIES_MACHOKE] =  0,
	[SPECIES_MACHAMP] =  0,
	[SPECIES_BELLSPROUT] =  0,
	[SPECIES_WEEPINBELL] =  0,
	[SPECIES_VICTREEBEL] =  0,
	[SPECIES_TENTACOOL] =  0,
	[SPECIES_TENTACRUEL] =  0,
	[SPECIES_GEODUDE] = 16,
	[SPECIES_GRAVELER] =  0,
	[SPECIES_GOLEM] =  0,
	[SPECIES_PONYTA] =  0,
	[SPECIES_RAPIDASH] =  0,
	[SPECIES_SLOWPOKE] =  0,
	[SPECIES_SLOWBRO] =  0,
	[SPECIES_MAGNEMITE] = 16,
	[SPECIES_MAGNETON] =  8,
	[SPECIES_FARFETCHD] =  0,
	[SPECIES_DODUO] =  0,
	[SPECIES_DODRIO] =  0,
	[SPECIES_SEEL] =  0,
	[SPECIES_DEWGONG] =  0,
	[SPECIES_GRIMER] =  0,
	[SPECIES_MUK] =  0,
	[SPECIES_SHELLDER] =  0,
	[SPECIES_CLOYSTER] =  0,
	[SPECIES_GASTLY] =  4,
	[SPECIES_HAUNTER] =  4,
	[SPECIES_GENGAR] =  0,
	[SPECIES_ONIX] =  0,
	[SPECIES_DROWZEE] =  0,
	[SPECIES_HYPNO] =  0,
	[SPECIES_KRABBY] =  0,
	[SPECIES_KINGLER] =  0,
	[SPECIES_VOLTORB] = 10,
	[SPECIES_ELECTRODE] = 12,
	[SPECIES_EXEGGCUTE] =  0,
	[SPECIES_EXEGGUTOR] =  0,
	[SPECIES_CUBONE] =  0,
	[SPECIES_MAROWAK] =  0,
	[SPECIES_HITMONLEE] =  0,
	[SPECIES_HITMONCHAN] =  0,
	[SPECIES_LICKITUNG] =  0,
	[SPECIES_KOFFING] =  8,
	[SPECIES_WEEZING] =  6,
	[SPECIES_RHYHORN] =  0,
	[SPECIES_RHYDON] =  0,
	[SPECIES_CHANSEY] =  0,
	[SPECIES_TANGELA] =  0,
	[SPECIES_KANGASKHAN] =  0,
	[SPECIES_HORSEA] =  0,
	[SPECIES_SEADRA] =  0,
	[SPECIES_GOLDEEN] =  0,
	[SPECIES_SEAKING] =  0,
	[SPECIES_STARYU] =  0,
	[SPECIES_STARMIE] =  0,
	[SPECIES_MR_MIME] =  0,
	[SPECIES_SCYTHER] =  0,
	[SPECIES_JYNX] =  0,
	[SPECIES_ELECTABUZZ] =  0,
	[SPECIES_MAGMAR] =  0,
	[SPECIES_PINSIR] =  0,
	[SPECIES_TAUROS] =  0,
	[SPECIES_MAGIKARP] =  0,
	[SPECIES_GYARADOS] =  0,
	[SPECIES_LAPRAS] =  0,
	[SPECIES_DITTO] =  0,
	[SPECIES_EEVEE] =  0,
	[SPECIES_VAPOREON] =  0,
	[SPECIES_JOLTEON] =  0,
	[SPECIES_FLAREON] =  0,
	[SPECIES_PORYGON] =  0,
	[SPECIES_OMANYTE] =  0,
	[SPECIES_OMASTAR] =  0,
	[SPECIES_KABUTO] =  0,
	[SPECIES_KABUTOPS] =  0,
	[SPECIES_AERODACTYL] =  6,
	[SPECIES_SNORLAX] =  0,
	[SPECIES_ARTICUNO] =  6,
	[SPECIES_ZAPDOS] =  8,
	[SPECIES_MOLTRES] =  5,
	[SPECIES_DRATINI] =  0,
	[SPECIES_DRAGONAIR] =  0,
	[SPECIES_DRAGONITE] =  3,
	[SPECIES_MEWTWO] =  0,
	[SPECIES_MEW] =  8,
	[SPECIES_CHIKORITA] =  0,
	[SPECIES_BAYLEEF] =  0,
	[SPECIES_MEGANIUM] =  0,
	[SPECIES_CYNDAQUIL] =  0,
	[SPECIES_QUILAVA] =  0,
	[SPECIES_TYPHLOSION] =  0,
	[SPECIES_TOTODILE] =  0,
	[SPECIES_CROCONAW] =  0,
	[SPECIES_FERALIGATR] =  0,
	[SPECIES_SENTRET] =  0,
	[SPECIES_FURRET] =  0,
	[SPECIES_HOOTHOOT] =  0,
	[SPECIES_NOCTOWL] =  0,
	[SPECIES_LEDYBA] =  0,
	[SPECIES_LEDIAN] =  8,
	[SPECIES_SPINARAK] =  0,
	[SPECIES_ARIADOS] =  0,
	[SPECIES_CROBAT] =  6,
	[SPECIES_CHINCHOU] =  0,
	[SPECIES_LANTURN] =  0,
	[SPECIES_PICHU] =  0,
	[SPECIES_CLEFFA] =  0,
	[SPECIES_IGGLYBUFF] =  0,
	[SPECIES_TOGEPI] =  0,
	[SPECIES_TOGETIC] =  0,
	[SPECIES_NATU] =  0,
	[SPECIES_XATU] =  0,
	[SPECIES_MAREEP] =  0,
	[SPECIES_FLAAFFY] =  0,
	[SPECIES_AMPHAROS] =  0,
	[SPECIES_BELLOSSOM] =  0,
	[SPECIES_MARILL] =  0,
	[SPECIES_AZUMARILL] =  0,
	[SPECIES_SUDOWOODO] =  0,
	[SPECIES_POLITOED] =  0,
	[SPECIES_HOPPIP] = 11,
	[SPECIES_SKIPLOOM] = 12,
	[SPECIES_JUMPLUFF] =  6,
	[SPECIES_AIPOM] =  0,
	[SPECIES_SUNKERN] =  0,
	[SPECIES_SUNFLORA] =  0,
	[SPECIES_YANMA] =  8,
	[SPECIES_WOOPER] =  0,
	[SPECIES_QUAGSIRE] =  0,
	[SPECIES_ESPEON] =  0,
	[SPECIES_UMBREON] =  0,
	[SPECIES_MURKROW] =  0,
	[SPECIES_SLOWKING] =  0,
	[SPECIES_MISDREAVUS] =  8,
	[SPECIES_UNOWN] =  5,
	[SPECIES_WOBBUFFET] =  0,
	[SPECIES_GIRAFARIG] =  0,
	[SPECIES_PINECO] =  0,
	[SPECIES_FORRETRESS] =  0,
	[SPECIES_DUNSPARCE] =  0,
	[SPECIES_GLIGAR] =  6,
	[SPECIES_STEELIX] =  0,
	[SPECIES_SNUBBULL] =  0,
	[SPECIES_GRANBULL] =  0,
	[SPECIES_QWILFISH] =  0,
	[SPECIES_SCIZOR] =  0,
	[SPECIES_SHUCKLE] =  0,
	[SPECIES_HERACROSS] =  0,
	[SPECIES_SNEASEL] =  0,
	[SPECIES_TEDDIURSA] =  0,
	[SPECIES_URSARING] =  0,
	[SPECIES_SLUGMA] =  0,
	[SPECIES_MAGCARGO] =  0,
	[SPECIES_SWINUB] =  0,
	[SPECIES_PILOSWINE] =  0,
	[SPECIES_CORSOLA] =  0,
	[SPECIES_REMORAID] =  0,
	[SPECIES_OCTILLERY] =  0,
	[SPECIES_DELIBIRD] =  0,
	[SPECIES_MANTINE] =  0,
	[SPECIES_SKARMORY] =  0,
	[SPECIES_HOUNDOUR] =  0,
	[SPECIES_HOUNDOOM] =  0,
	[SPECIES_KINGDRA] =  0,
	[SPECIES_PHANPY] =  0,
	[SPECIES_DONPHAN] =  0,
	[SPECIES_PORYGON2] =  0,
	[SPECIES_STANTLER] =  0,
	[SPECIES_SMEARGLE] =  0,
	[SPECIES_TYROGUE] =  0,
	[SPECIES_HITMONTOP] =  0,
	[SPECIES_SMOOCHUM] =  0,
	[SPECIES_ELEKID] =  0,
	[SPECIES_MAGBY] =  0,
	[SPECIES_MILTANK] =  0,
	[SPECIES_BLISSEY] =  0,
	[SPECIES_RAIKOU] =  0,
	[SPECIES_ENTEI] =  0,
	[SPECIES_SUICUNE] =  0,
	[SPECIES_LARVITAR] =  0,
	[SPECIES_PUPITAR] =  0,
	[SPECIES_TYRANITAR] =  0,
	[SPECIES_LUGIA] =  3,
	[SPECIES_HO_OH] =  6,
	[SPECIES_CELEBI] = 15,
	[SPECIES_OLD_UNOWN_B] =  0,
	[SPECIES_OLD_UNOWN_C] =  0,
	[SPECIES_OLD_UNOWN_D] =  0,
	[SPECIES_OLD_UNOWN_E] =  0,
	[SPECIES_OLD_UNOWN_F] =  0,
	[SPECIES_OLD_UNOWN_G] =  0,
	[SPECIES_OLD_UNOWN_H] =  0,
	[SPECIES_OLD_UNOWN_I] =  0,
	[SPECIES_OLD_UNOWN_J] =  0,
	[SPECIES_OLD_UNOWN_K] =  0,
	[SPECIES_OLD_UNOWN_L] =  0,
	[SPECIES_OLD_UNOWN_M] =  0,
	[SPECIES_OLD_UNOWN_N] =  0,
	[SPECIES_OLD_UNOWN_O] =  0,
	[SPECIES_OLD_UNOWN_P] =  0,
	[SPECIES_OLD_UNOWN_Q] =  0,
	[SPECIES_OLD_UNOWN_R] =  0,
	[SPECIES_OLD_UNOWN_S] =  0,
	[SPECIES_OLD_UNOWN_T] =  0,
	[SPECIES_OLD_UNOWN_U] =  0,
	[SPECIES_OLD_UNOWN_V] =  0,
	[SPECIES_OLD_UNOWN_W] =  0,
	[SPECIES_OLD_UNOWN_X] =  0,
	[SPECIES_OLD_UNOWN_Y] =  0,
	[SPECIES_OLD_UNOWN_Z] =  0,
	[SPECIES_TREECKO] =  0,
	[SPECIES_GROVYLE] =  0,
	[SPECIES_SCEPTILE] =  0,
	[SPECIES_TORCHIC] =  0,
	[SPECIES_COMBUSKEN] =  0,
	[SPECIES_BLAZIKEN] =  0,
	[SPECIES_MUDKIP] =  0,
	[SPECIES_MARSHTOMP] =  0,
	[SPECIES_SWAMPERT] =  0,
	[SPECIES_POOCHYENA] =  0,
	[SPECIES_MIGHTYENA] =  0,
	[SPECIES_ZIGZAGOON] =  0,
	[SPECIES_LINOONE] =  0,
	[SPECIES_WURMPLE] =  0,
	[SPECIES_SILCOON] =  0,
	[SPECIES_BEAUTIFLY] =  8,
	[SPECIES_CASCOON] =  0,
	[SPECIES_DUSTOX] = 10,
	[SPECIES_LOTAD] =  0,
	[SPECIES_LOMBRE] =  0,
	[SPECIES_LUDICOLO] =  0,
	[SPECIES_SEEDOT] =  0,
	[SPECIES_NUZLEAF] =  0,
	[SPECIES_SHIFTRY] =  0,
	[SPECIES_NINCADA] =  0,
	[SPECIES_NINJASK] = 10,
	[SPECIES_SHEDINJA] =  8,
	[SPECIES_TAILLOW] =  0,
	[SPECIES_SWELLOW] =  0,
	[SPECIES_SHROOMISH] =  0,
	[SPECIES_BRELOOM] =  0,
	[SPECIES_SPINDA] =  0,
	[SPECIES_WINGULL] = 16,
	[SPECIES_PELIPPER] =  8,
	[SPECIES_SURSKIT] =  0,
	[SPECIES_MASQUERAIN] = 10,
	[SPECIES_WAILMER] =  0,
	[SPECIES_WAILORD] =  0,
	[SPECIES_SKITTY] =  0,
	[SPECIES_DELCATTY] =  0,
	[SPECIES_KECLEON] =  0,
	[SPECIES_BALTOY] =  4,
	[SPECIES_CLAYDOL] =  4,
	[SPECIES_NOSEPASS] =  0,
	[SPECIES_TORKOAL] =  0,
	[SPECIES_SABLEYE] =  0,
	[SPECIES_BARBOACH] =  0,
	[SPECIES_WHISCASH] =  0,
	[SPECIES_LUVDISC] =  0,
	[SPECIES_CORPHISH] =  0,
	[SPECIES_CRAWDAUNT] =  0,
	[SPECIES_FEEBAS] =  0,
	[SPECIES_MILOTIC] =  0,
	[SPECIES_CARVANHA] =  0,
	[SPECIES_SHARPEDO] =  0,
	[SPECIES_TRAPINCH] =  0,
	[SPECIES_VIBRAVA] =  0,
	[SPECIES_FLYGON] =  3,
	[SPECIES_MAKUHITA] =  0,
	[SPECIES_HARIYAMA] =  0,
	[SPECIES_ELECTRIKE] =  0,
	[SPECIES_MANECTRIC] =  0,
	[SPECIES_NUMEL] =  0,
	[SPECIES_CAMERUPT] =  0,
	[SPECIES_SPHEAL] =  0,
	[SPECIES_SEALEO] =  0,
	[SPECIES_WALREIN] =  0,
	[SPECIES_CACNEA] =  0,
	[SPECIES_CACTURNE] =  0,
	[SPECIES_SNORUNT] =  0,
	[SPECIES_GLALIE] = 12,
	[SPECIES_LUNATONE] = 13,
	[SPECIES_SOLROCK] =  4,
	[SPECIES_AZURILL] =  0,
	[SPECIES_SPOINK] =  0,
	[SPECIES_GRUMPIG] =  0,
	[SPECIES_PLUSLE] =  0,
	[SPECIES_MINUN] =  0,
	[SPECIES_MAWILE] =  0,
	[SPECIES_MEDITITE] =  0,
	[SPECIES_MEDICHAM] =  0,
	[SPECIES_SWABLU] = 12,
	[SPECIES_ALTARIA] =  8,
	[SPECIES_WYNAUT] =  0,
	[SPECIES_DUSKULL] =  4,
	[SPECIES_DUSCLOPS] =  0,
	[SPECIES_ROSELIA] =  0,
	[SPECIES_SLAKOTH] =  0,
	[SPECIES_VIGOROTH] =  0,
	[SPECIES_SLAKING] =  0,
	[SPECIES_GULPIN] =  0,
	[SPECIES_SWALOT] =  0,
	[SPECIES_TROPIUS] =  0,
	[SPECIES_WHISMUR] =  0,
	[SPECIES_LOUDRED] =  0,
	[SPECIES_EXPLOUD] =  0,
	[SPECIES_CLAMPERL] =  0,
	[SPECIES_HUNTAIL] =  0,
	[SPECIES_GOREBYSS] =  0,
	[SPECIES_ABSOL] =  0,
	[SPECIES_SHUPPET] = 12,
	[SPECIES_BANETTE] =  8,
	[SPECIES_SEVIPER] =  0,
	[SPECIES_ZANGOOSE] =  0,
	[SPECIES_RELICANTH] =  0,
	[SPECIES_ARON] =  0,
	[SPECIES_LAIRON] =  0,
	[SPECIES_AGGRON] =  0,
	[SPECIES_CASTFORM] = 16,
	[SPECIES_VOLBEAT] =  0,
	[SPECIES_ILLUMISE] =  0,
	[SPECIES_LILEEP] =  0,
	[SPECIES_CRADILY] =  0,
	[SPECIES_ANORITH] =  0,
	[SPECIES_ARMALDO] =  0,
	[SPECIES_RALTS] =  0,
	[SPECIES_KIRLIA] =  0,
	[SPECIES_GARDEVOIR] =  0,
	[SPECIES_BAGON] =  0,
	[SPECIES_SHELGON] =  0,
	[SPECIES_SALAMENCE] =  0,
	[SPECIES_BELDUM] =  8,
	[SPECIES_METANG] =  0,
	[SPECIES_METAGROSS] =  0,
	[SPECIES_REGIROCK] =  0,
	[SPECIES_REGICE] =  0,
	[SPECIES_REGISTEEL] =  0,
	[SPECIES_KYOGRE] =  0,
	[SPECIES_GROUDON] =  0,
	[SPECIES_RAYQUAZA] =  6,
	[SPECIES_LATIAS] =  6,
	[SPECIES_LATIOS] =  6,
	[SPECIES_JIRACHI] = 12,
	[SPECIES_DEOXYS] =  4,
	[SPECIES_CHIMECHO] = 12,
	[SPECIES_TURTWIG] = 0, 
	[SPECIES_GROTLE] = 0,
	[SPECIES_TORTERRA] = 0,
	[SPECIES_CHIMCHAR] = 0,
	[SPECIES_MONFERNO] = 0,
	[SPECIES_INFERNAPE] = 0,
	[SPECIES_PIPLUP] = 0,
	[SPECIES_PRINPLUP] = 0,
	[SPECIES_EMPOLEON] = 0,
	[SPECIES_STARLY] = 0,
	[SPECIES_STARAVIA] = 0,
	[SPECIES_STARAPTOR] = 0,
	[SPECIES_BIDOOF] = 0,
	[SPECIES_BIBAREL] = 0,
	[SPECIES_KRICKETOT] = 0,
	[SPECIES_KRICKETUNE] = 0,
	[SPECIES_SHINX] = 0,
	[SPECIES_LUXIO] = 0,
	[SPECIES_LUXRAY] = 0,
	[SPECIES_BUDEW] = 0,
	[SPECIES_ROSERADE] = 0,
	[SPECIES_CRANIDOS] = 0,
	[SPECIES_RAMPARDOS] = 0,
	[SPECIES_SHIELDON] = 0,
	[SPECIES_BASTIODON] = 0,
	[SPECIES_BURMY] = 0,
	[SPECIES_WORMADAM] = 0,
	[SPECIES_MOTHIM] = 3,
	[SPECIES_COMBEE] = 1,
	[SPECIES_VESPIQUEN] = 3,
	[SPECIES_PACHIRISU] = 0,
	[SPECIES_BUIZEL] = 0,
	[SPECIES_FLOATZEL] = 0,
	[SPECIES_CHERUBI] = 0,
	[SPECIES_CHERRIM] = 0,
	[SPECIES_SHELLOSE] = 0,
	[SPECIES_GASTRODONE] = 0,
	[SPECIES_AMBIPOM] = 0,
	[SPECIES_DRIFLOON] = 1,
	[SPECIES_DRIFBLIM] = 3,
	[SPECIES_BUNEARY] = 0,
	[SPECIES_LOPUNNY] = 0,
	[SPECIES_MISMAGIUS] = 0,
	[SPECIES_HONCHKROW] = 0,
	[SPECIES_GLAMEOW] = 0,
	[SPECIES_PURUGLY] = 0,
	[SPECIES_CHINGLING] = 0,
	[SPECIES_STUNKY] = 0,
	[SPECIES_SKUNTANK] = 0,
	[SPECIES_BRONZOR] = 0,
	[SPECIES_BRONZONG] = 0,
	[SPECIES_BONSLY] = 0,
	[SPECIES_MIME_JR] = 0,
	[SPECIES_HAPPINY] = 0,
	[SPECIES_CHATOT] = 0,
	[SPECIES_SPIRITOMB] = 0,
	[SPECIES_GIBLE] = 0,
	[SPECIES_GABITE] = 0,
	[SPECIES_GARCHOMP] = 0,
	[SPECIES_MUNCHLAX] = 0,
	[SPECIES_RIOLU] = 0,
	[SPECIES_LUCARIO] = 0,
	[SPECIES_HIPPOPOTAS] = 0,
	[SPECIES_HIPPOWDON] = 0,
	[SPECIES_SKORUPI] = 0,
	[SPECIES_DRAPION] = 0,
	[SPECIES_CROAGUNK] = 0,
	[SPECIES_TOXICROAK] = 0,
	[SPECIES_CARNIVINE] = 0,
	[SPECIES_FINNEON] = 0,
	[SPECIES_LUMINEON] = 0,
	[SPECIES_MANTYKE] = 0,
	[SPECIES_SNOVER] = 0,
	[SPECIES_ABOMASNOW] = 0,
	[SPECIES_WEAVILE] = 0,
	[SPECIES_MAGNEZONE] = 3,
	[SPECIES_LICKILICKY] = 0,
	[SPECIES_RHYPERIOR] = 0,
	[SPECIES_TANGROWTH] = 0,
	[SPECIES_ELECTIVIRE] = 0,
	[SPECIES_MAGMORTAR] = 0,
	[SPECIES_TOGEKISS] = 3,
	[SPECIES_YANMEGA] = 3,
	[SPECIES_LEAFEON] = 0,
	[SPECIES_GLACEON] = 0,
	[SPECIES_GLISCOR] = 3,
	[SPECIES_MAMOSWINE] = 0,
	[SPECIES_PORYGONZ] = 0,
	[SPECIES_GALLADE] = 0,
};

#include "../data/trainer_parties.h"

#if ENGLISH
#include "../data/text/trainer_class_names_en.h"
#include "../data/trainers_en.h"
#include "../data/text/species_names_en.h"
#include "../data/text/move_names_en.h"
#elif GERMAN
#include "../data/text/trainer_class_names_de.h"
#include "../data/trainers_de.h"
#include "../data/text/species_names_de.h"
#include "../data/text/move_names_de.h"
#endif

const u32 gUnknown_81F9528 = 0x101;
