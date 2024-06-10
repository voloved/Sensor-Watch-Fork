#include "festival_schedule_face.h"

// Genre - https://old.reddit.com/r/ElectricForest/comments/1bqbwlv/electric_forest_2024_lineup_broken_down_by_genre/
// Line-up - https://clashfinder.com/m/electricforest2024settimepredictions/?user=152rg1.te
const schedule_t festival_acts[NUM_ACTS + 1]=
{
    {
        .artist = "ACRAZE",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 12
    },
    {
        .artist = "AK SPO",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 15},
        .genre = DnB,
        .popularity = 106
    },
    {
        .artist = "ALLEYC",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 17, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 18, .unit.minute = 30},
        .genre = DUBSTEP,
        .popularity = 75
    },
    {
        .artist = "ATLIEN",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 53
    },
    {
        .artist = "AYYBO ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 42
    },
    {
        .artist = "BAGGI ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 105
    },
    {
        .artist = "BARCLA",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 30},
        .genre = DUBSTEP,
        .popularity = 85
    },
    {
        .artist = "BEN BO",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 1, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 8
    },
    {
        .artist = "BLACK ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 2, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 3, .unit.minute = 15},
        .genre = DUBSTEP,
        .popularity = 50
    },
    {
        .artist = "BLASTO",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .genre = TECHNO,
        .popularity = 51
    },
    {
        .artist = "BOOGIE",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 15},
        .genre = DUBSTEP,
        .popularity = 60
    },
    {
        .artist = "BOOGIE",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 15},
        .genre = DUBSTEP,
        .popularity = 60
    },
    {
        .artist = "BOOGIE",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 15},
        .genre = JAM,
        .popularity = 95
    },
    {
        .artist = "BRANDI",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 117
    },
    {
        .artist = "CALUSS",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 78
    },
    {
        .artist = "CANABL",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 87
    },
    {
        .artist = "CANNON",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .genre = POP,
        .popularity = 20
    },
    {
        .artist = "CASPA ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 89
    },
    {
        .artist = "CASSIA",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 46
    },
    {
        .artist = "CHAOS ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 52
    },
    {
        .artist = "CHARLO",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 1, .unit.minute = 45},
        .genre = TECHNO,
        .popularity = 15
    },
    {
        .artist = "CHASE ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 15},
        .genre = DnB,
        .popularity = 3
    },
    {
        .artist = "COCO &",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 77
    },
    {
        .artist = "CUCO  ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .genre = INDIE,
        .popularity = 92
    },
    {
        .artist = "DAVE Y",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 15},
        .genre = JAM,
        .popularity = 5
    },
    {
        .artist = "DIMENS",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .genre = DnB,
        .popularity = 23
    },
    {
        .artist = "DISCOV",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 17, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 0},
        .genre = GENRE_COUNT,
        .popularity = 0
    },
    {
        .artist = "DIRTWI",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 45},
        .genre = JAM,
        .popularity = 62
    },
    {
        .artist = "DISCO ",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 0},
        .genre = JAM,
        .popularity = 84
    },
    {
        .artist = "DIXON'",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 1, .unit.minute = 45},
        .genre = SOUL,
        .popularity = 112
    },
    {
        .artist = "DJ BRO",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 114
    },
    {
        .artist = "DJ SUS",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 91
    },
    {
        .artist = "DRAMA ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 22
    },
    {
        .artist = "DUMPST",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 17, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 45},
        .genre = JAM,
        .popularity = 90
    },
    {
        .artist = "EGGY  ",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 17, .unit.minute = 30},
        .genre = JAM,
        .popularity = 101
    },
    {
        .artist = "EMO NI",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 30},
        .genre = INDIE,
        .popularity = 118
    },
    {
        .artist = "EQUANI",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 30},
        .genre = INDIE,
        .popularity = 63
    },
    {
        .artist = "EVERYT",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 1, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 4
    },
    {
        .artist = "EX6For",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 13, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 14, .unit.minute = 30},
        .genre = GENRE_COUNT,
        .popularity = 0
    },
    {
        .artist = "FURY  ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 14, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 15, .unit.minute = 0},
        .genre = GENRE_COUNT,
        .popularity = 0
    },
    {
        .artist = "EXCISI",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 1, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 16
    },
    {
        .artist = "G JONE",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 45},
        .genre = DnB,
        .popularity = 81
    },
    {
        .artist = "GIGANT",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 1, .unit.minute = 30},
        .genre = DUBSTEP,
        .popularity = 19
    },
    {
        .artist = "GOODBO",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 45},
        .genre = INDIE,
        .popularity = 14
    },
    {
        .artist = "GREEN ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 36
    },
    {
        .artist = "H&RRY ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 119
    },
    {
        .artist = "HAMDI ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 45
    },
    {
        .artist = "HIATUS",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 30},
        .genre = SOUL,
        .popularity = 17
    },
    {
        .artist = "HYPERB",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 41
    },
    {
        .artist = "INZO  ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 30},
        .genre = TRAP,
        .popularity = 44
    },
    {
        .artist = "IT'S M",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 45},
        .genre = DANCE,
        .popularity = 35
    },
    {
        .artist = "IVY LA",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 16, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 17, .unit.minute = 15},
        .genre = DnB,
        .popularity = 68
    },
    {
        .artist = "JASON ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 102
    },
    {
        .artist = "JJUUJJ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 0},
        .genre = JAM,
        .popularity = 104
    },
    {
        .artist = "JOHN S",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 3, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 5
    },
    {
        .artist = "JUELZ ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 30},
        .genre = TRAP,
        .popularity = 72
    },
    {
        .artist = "KALLAG",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 110
    },
    {
        .artist = "KENNY ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 15},
        .genre = RAP,
        .popularity = 21
    },
    {
        .artist = "KILTRO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 73
    },
    {
        .artist = "KNOCK2",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 1, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 29
    },
    {
        .artist = "LAYTON",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 0},
        .genre = TECHNO,
        .popularity = 33
    },
    {
        .artist = "LE YOU",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 39
    },
    {
        .artist = "LEAGUE",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 17, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 0},
        .genre = JAM,
        .popularity = 120
    },
    {
        .artist = "LETTUC",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 45},
        .genre = JAM,
        .popularity = 59
    },
    {
        .artist = "LEVEL ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 18, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 71
    },
    {
        .artist = "LEVITY",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 70
    },
    {
        .artist = "LIBIAN",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 0},
        .genre = RAP,
        .popularity = 9
    },
    {
        .artist = "LITTLE",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 1, .unit.minute = 0},
        .genre = RAP,
        .popularity = 56
    },
    {
        .artist = "LP GIO",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 2, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 30
    },
    {
        .artist = "LP GIO",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 2, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 30
    },
    {
        .artist = "LSZEE ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 3, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 37
    },
    {
        .artist = "LUCII ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 30},
        .genre = DUBSTEP,
        .popularity = 65
    },
    {
        .artist = "LUDACR",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 3, .unit.minute = 0},
        .genre = RAP,
        .popularity = 2
    },
    {
        .artist = "LYNY  ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 30},
        .genre = DUBSTEP,
        .popularity = 80
    },
    {
        .artist = "MADDY ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 17, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .genre = TRAP,
        .popularity = 86
    },
    {
        .artist = "MAJOR ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 48
    },
    {
        .artist = "MARSH ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 40
    },
    {
        .artist = "MASCOL",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 30},
        .genre = POP,
        .popularity = 88
    },
    {
        .artist = "MASONI",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 116
    },
    {
        .artist = "MATROD",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 24
    },
    {
        .artist = "MAU P ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 13
    },
    {
        .artist = "MICHAE",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 30},
        .genre = DANCE,
        .popularity = 57
    },
    {
        .artist = "MOJAVE",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 103
    },
    {
        .artist = "MOONTR",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 0},
        .genre = SOUL,
        .popularity = 64
    },
    {
        .artist = "NEIL F",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 2, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 3, .unit.minute = 15},
        .genre = INDIE,
        .popularity = 11
    },
    {
        .artist = "NELLY ",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .genre = POP,
        .popularity = 1
    },
    {
        .artist = "NEOMA ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 30},
        .genre = POP,
        .popularity = 100
    },
    {
        .artist = "ODEN &",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 47
    },
    {
        .artist = "ONLY F",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 79
    },
    {
        .artist = "PAPERW",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = RAP,
        .popularity = 107
    },
    {
        .artist = "PEACH ",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 15},
        .genre = INDIE,
        .popularity = 27
    },
    {
        .artist = "POLITI",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 2, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 3, .unit.minute = 0},
        .genre = TRAP,
        .popularity = 113
    },
    {
        .artist = "POLYRH",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 15},
        .genre = SOUL,
        .popularity = 92
    },
    {
        .artist = "PRETYL",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 45},
        .genre = JAM,
        .popularity = 32
    },
    {
        .artist = "PRETYP",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 66
    },
    {
        .artist = "PRIDE ",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 20},
        .genre = GENRE_COUNT,
        .popularity = 15
    },
    {
        .artist = "PROXIM",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 15},
        .genre = JAM,
        .popularity = 54
    },
    {
        .artist = "RANGER",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 16, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 93
    },
    {
        .artist = "RAWAYA",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 17, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 18, .unit.minute = 30},
        .genre = SOUL,
        .popularity = 6
    },
    {
        .artist = "RAYBEN",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 76
    },
    {
        .artist = "REDRUM",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 0},
        .genre = TRAP,
        .popularity = 111
    },
    {
        .artist = "SAMMY ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 15},
        .genre = DnB,
        .popularity = 26
    },
    {
        .artist = "SARA L",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 30},
        .genre = TECHNO,
        .popularity = 38
    },
    {
        .artist = "SEVEN ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 18
    },
    {
        .artist = "SHAE D",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 16, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 17, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 109
    },
    {
        .artist = "SHAUN ",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 30},
        .genre = DANCE,
        .popularity = 83
    },
    {
        .artist = "SLAYYY",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 0},
        .genre = POP,
        .popularity = 31
    },
    {
        .artist = "STRING",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 30},
        .genre = JAM,
        .popularity = 58
    },
    {
        .artist = "SUBTRO",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 10
    },
    {
        .artist = "SULTAN",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 25
    },
    {
        .artist = "SUPER ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 0},
        .genre = DnB,
        .popularity = 96
    },
    {
        .artist = "SWAYLO",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 115
    },
    {
        .artist = "THOUGH",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .genre = TRAP,
        .popularity = 98
    },
    {
        .artist = "TRIPP ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .genre = TRAP,
        .popularity = 94
    },
    {
        .artist = "TSHA  ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 55
    },
    {
        .artist = "UMPHRE",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 45},
        .genre = JAM,
        .popularity = 67
    },
    {
        .artist = "UNUSUA",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 45},
        .genre = POP,
        .popularity = 74
    },
    {
        .artist = "VENBEE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .genre = DnB,
        .popularity = 34
    },
    {
        .artist = "VINI V",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 2, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 7
    },
    {
        .artist = "VNSSA ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 82
    },
    {
        .artist = "WESTEN",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 43
    },
    {
        .artist = "WHYTE ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 30},
        .genre = DUBSTEP,
        .popularity = 99
    },
    {
        .artist = "WILL C",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 69
    },
    {
        .artist = " YOGA1",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 12, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 13, .unit.minute = 15},
        .genre = GENRE_COUNT,
        .popularity = 0
    },
    {
        .artist = " YOGA2",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 12, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 13, .unit.minute = 15},
        .genre = GENRE_COUNT,
        .popularity = 0
    },
    {
        .artist = " YOGA3",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 12, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 13, .unit.minute = 15},
        .genre = GENRE_COUNT,
        .popularity = 0
    },
    {
        .artist = "WOOLI ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 2, .unit.minute = 0},
        .genre = DnB,
        .popularity = 28
    },
    {
        .artist = "ZEN SE",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 30},
        .genre = DnB,
        .popularity = 108
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
