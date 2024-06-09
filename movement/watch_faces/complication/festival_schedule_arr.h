#include "festival_schedule_face.h"

const schedule_t festival_acts[NUM_ACTS + 1]=
{
    {
        .artist = "ACRAZE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 12
    },
    {
        .artist = "AK SPO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 107
    },
    {
        .artist = "ALLEYC",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 76
    },
    {
        .artist = "ATLIEN",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 56
    },
    {
        .artist = "AYYBO ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 40
    },
    {
        .artist = "BAGGI ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 106
    },
    {
        .artist = "BARCLA",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 85
    },
    {
        .artist = "BEN BO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 8
    },
    {
        .artist = "BLACK ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 53
    },
    {
        .artist = "BLASTO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = TECHNO,
        .popularity = 54
    },
    {
        .artist = "BOOGIE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 60
    },
    {
        .artist = "BOOGIE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 60
    },
    {
        .artist = "BOOGIE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = JAM,
        .popularity = 96
    },
    {
        .artist = "BRANDI",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 25, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 25, .unit.hour = 23, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 118
    },
    {
        .artist = "CALUSS",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 79
    },
    {
        .artist = "CANABL",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 88
    },
    {
        .artist = "CANNON",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = POP,
        .popularity = 19
    },
    {
        .artist = "CASPA ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 90
    },
    {
        .artist = "CASSIA",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 44
    },
    {
        .artist = "CHAOS ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 55
    },
    {
        .artist = "CHARLO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = TECHNO,
        .popularity = 15
    },
    {
        .artist = "CHASE ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 3
    },
    {
        .artist = "COCO &",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 78
    },
    {
        .artist = "CUCO  ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 98
    },
    {
        .artist = "DIMENS",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 22
    },
    {
        .artist = "DIRTWI",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = JAM,
        .popularity = 62
    },
    {
        .artist = "DISCO ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = JAM,
        .popularity = 84
    },
    {
        .artist = "DIXON'",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 26, .unit.hour = 0, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 26, .unit.hour = 1, .unit.minute = 45},
        .genre = SOUL,
        .popularity = 113
    },
    {
        .artist = "DJ BRO",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 18, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 19, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 115
    },
    {
        .artist = "DJ SUS",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 92
    },
    {
        .artist = "DRAMA ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 21
    },
    {
        .artist = "DUMPST",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = JAM,
        .popularity = 91
    },
    {
        .artist = "EGGY  ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = JAM,
        .popularity = 102
    },
    {
        .artist = "EMO NI",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 119
    },
    {
        .artist = "EQUANI",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 63
    },
    {
        .artist = "EVERYT",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 4
    },
    {
        .artist = "EXCISI",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 16
    },
    {
        .artist = "G JONE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 82
    },
    {
        .artist = "GIGANT",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 35
    },
    {
        .artist = "GOODBO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 14
    },
    {
        .artist = "GREEN ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 36
    },
    {
        .artist = "H&RRY ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 120
    },
    {
        .artist = "HAMDI ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 43
    },
    {
        .artist = "HIATUS",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = SOUL,
        .popularity = 17
    },
    {
        .artist = "HYPERB",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 52
    },
    {
        .artist = "INZO  ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = TRAP,
        .popularity = 42
    },
    {
        .artist = "IT'S M",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 34
    },
    {
        .artist = "IVY LA",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 68
    },
    {
        .artist = "JASON ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 103
    },
    {
        .artist = "JJUUJJ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = JAM,
        .popularity = 105
    },
    {
        .artist = "JOHN S",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 5
    },
    {
        .artist = "JUELZ ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = TRAP,
        .popularity = 72
    },
    {
        .artist = "KALLAG",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 111
    },
    {
        .artist = "KENNY ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = RAP,
        .popularity = 20
    },
    {
        .artist = "KILTRO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 74
    },
    {
        .artist = "KNOCK2",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 28
    },
    {
        .artist = "LAYTON",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = TECHNO,
        .popularity = 32
    },
    {
        .artist = "LE YOU",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 38
    },
    {
        .artist = "LEAGUE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = JAM,
        .popularity = 121
    },
    {
        .artist = "LETTUC",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = JAM,
        .popularity = 59
    },
    {
        .artist = "LEVEL ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 71
    },
    {
        .artist = "LEVITY",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 70
    },
    {
        .artist = "LIBIAN",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = RAP,
        .popularity = 9
    },
    {
        .artist = "LITTLE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = RAP,
        .popularity = 51
    },
    {
        .artist = "LP GIO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 29
    },
    {
        .artist = "LSZEE ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 48
    },
    {
        .artist = "LUCII ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 65
    },
    {
        .artist = "LUDACR",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = RAP,
        .popularity = 2
    },
    {
        .artist = "LYNY  ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 81
    },
    {
        .artist = "MADDY ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = TRAP,
        .popularity = 87
    },
    {
        .artist = "MAJOR ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 46
    },
    {
        .artist = "MARSH ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 39
    },
    {
        .artist = "MASCOL",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = POP,
        .popularity = 89
    },
    {
        .artist = "MASONI",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 117
    },
    {
        .artist = "MATROD",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 23
    },
    {
        .artist = "MAU P ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 13
    },
    {
        .artist = "MICHAE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 57
    },
    {
        .artist = "MOJAVE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 104
    },
    {
        .artist = "MOONTR",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = SOUL,
        .popularity = 64
    },
    {
        .artist = "NEIL F",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 11
    },
    {
        .artist = "NELLY ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = POP,
        .popularity = 1
    },
    {
        .artist = "NEOMA ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = POP,
        .popularity = 101
    },
    {
        .artist = "ODD MO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 31
    },
    {
        .artist = "ODEN &",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 45
    },
    {
        .artist = "ONLY F",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 80
    },
    {
        .artist = "PAPERW",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = RAP,
        .popularity = 108
    },
    {
        .artist = "PEACH ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 26
    },
    {
        .artist = "POLITI",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 16, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 30},
        .genre = TRAP,
        .popularity = 114
    },
    {
        .artist = "POLYRH",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = SOUL,
        .popularity = 93
    },
    {
        .artist = "PRETTY",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = JAM,
        .popularity = 47
    },
    {
        .artist = "PRETTY",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 66
    },
    {
        .artist = "PROXIM",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = JAM,
        .popularity = 49
    },
    {
        .artist = "RANGER",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 94
    },
    {
        .artist = "RAWAYA",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = SOUL,
        .popularity = 6
    },
    {
        .artist = "RAYBEN",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 77
    },
    {
        .artist = "REDRUM",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = TRAP,
        .popularity = 112
    },
    {
        .artist = "SAMMY ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 25
    },
    {
        .artist = "SARA L",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = TECHNO,
        .popularity = 37
    },
    {
        .artist = "SEVEN ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 18
    },
    {
        .artist = "SHAE D",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 110
    },
    {
        .artist = "SHAUN ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 83
    },
    {
        .artist = "SLAYYY",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = POP,
        .popularity = 30
    },
    {
        .artist = "STRING",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 23, .unit.minute = 30},
        .genre = JAM,
        .popularity = 58
    },
    {
        .artist = "SUBTRO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 10
    },
    {
        .artist = "SULTAN",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 24
    },
    {
        .artist = "SUPER ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 97
    },
    {
        .artist = "SWAYLO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 116
    },
    {
        .artist = "THOUGH",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = TRAP,
        .popularity = 99
    },
    {
        .artist = "TRIPP ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = TRAP,
        .popularity = 95
    },
    {
        .artist = "TSHA  ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 50
    },
    {
        .artist = "UMPHRE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = JAM,
        .popularity = 67
    },
    {
        .artist = "UNUSUA",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = POP,
        .popularity = 75
    },
    {
        .artist = "VENBEE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 33
    },
    {
        .artist = "VINI V",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 7
    },
    {
        .artist = "VNSSA ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 86
    },
    {
        .artist = "WESTEN",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 41
    },
    {
        .artist = "WHYTE ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 100
    },
    {
        .artist = "WILL C",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 69
    },
    {
        .artist = "WOOLI ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 27
    },
    {
        .artist = "ZEN SE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 109
    },
    [NUM_ACTS]  = { //Fall back
        .artist = "No Act",
        .stage = STAGE_COUNT,
        .start_time = {.unit.year = 0, .unit.month = 0, .unit.day = 0, .unit.hour = 0, .unit.minute = 0},
        .end_time = {.unit.year = 63, .unit.month = 15, .unit.day = 31, .unit.hour = 31, .unit.minute = 63},
        .genre = GENRE_COUNT,
        .popularity = 0
    }
};
