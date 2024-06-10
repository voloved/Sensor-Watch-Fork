// Genre - https://old.reddit.com/r/ElectricForest/comments/1bqbwlv/electric_forest_2024_lineup_broken_down_by_genre/
// Line-up - https://clashfinder.com/m/electricforest2024settimepredictions/?user=152rg1.te
#include "festival_schedule_face.h"

const schedule_t festival_acts[NUM_ACTS + 1]=
{
    {
        .artist = "ACRAZE",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 20
    },
    {
        .artist = "AK SPO",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 15},
        .genre = DnB,
        .popularity = 104
    },
    {
        .artist = "ALLEYC",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 17, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 18, .unit.minute = 30},
        .genre = DUBSTEP,
        .popularity = 76
    },
    {
        .artist = "ATLIEN",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 55
    },
    {
        .artist = "AYYBO ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 39
    },
    {
        .artist = "BAGGI ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 103
    },
    {
        .artist = "BARCLA",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 30},
        .genre = BASS,
        .popularity = 83
    },
    {
        .artist = "BEN B:",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 1, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 11
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
        .popularity = 59
    },
    {
        .artist = "BOOGIE",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 15},
        .genre = DUBSTEP,
        .popularity = 63
    },
    {
        .artist = "BOOGIE",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 15},
        .genre = JAM,
        .popularity = 94
    },
    {
        .artist = "BRANDI",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 0
    },
    {
        .artist = "BRANDI",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 0
    },
    {
        .artist = "CALUSS",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 64
    },
    {
        .artist = "CANABL",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 86
    },
    {
        .artist = "CANNON",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 17
    },
    {
        .artist = "CASPA ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 87
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
        .popularity = 54
    },
    {
        .artist = "CHARLO",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 1, .unit.minute = 45},
        .genre = TECHNO,
        .popularity = 4
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
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 68
    },
    {
        .artist = "CUCO  ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .genre = INDIE,
        .popularity = 89
    },
    {
        .artist = "DAVE Y",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 0},
        .genre = JAM,
        .popularity = 112
    },
    {
        .artist = "DAVE Y",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 15, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 16, .unit.minute = 30},
        .genre = JAM,
        .popularity = 112
    },
    {
        .artist = "DAVE Y",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 15},
        .genre = JAM,
        .popularity = 112
    },
    {
        .artist = "DIMENS",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .genre = DnB,
        .popularity = 26
    },
    {
        .artist = "DIRTWI",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 45},
        .genre = JAM,
        .popularity = 66
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
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = SOUL,
        .popularity = 110
    },
    {
        .artist = "DIXON'",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 16, .unit.minute = 0},
        .genre = SOUL,
        .popularity = 110
    },
    {
        .artist = "DIXON'",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 15, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 16, .unit.minute = 30},
        .genre = SOUL,
        .popularity = 110
    },
    {
        .artist = "DIXON'",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 1, .unit.minute = 45},
        .genre = SOUL,
        .popularity = 110
    },
    {
        .artist = "DJ BRO",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 113
    },
    {
        .artist = "DJ BRO",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 113
    },
    {
        .artist = "DJ SUS",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 90
    },
    {
        .artist = "DRAMA ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 30
    },
    {
        .artist = "DUMPST",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 17, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 45},
        .genre = JAM,
        .popularity = 92
    },
    {
        .artist = "EGGY  ",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 17, .unit.minute = 30},
        .genre = JAM,
        .popularity = 99
    },
    {
        .artist = "EMO NI",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 30},
        .genre = INDIE,
        .popularity = 0
    },
    {
        .artist = "EQUANI",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 45},
        .genre = INDIE,
        .popularity = 57
    },
    {
        .artist = "EQUANI",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 30},
        .genre = INDIE,
        .popularity = 57
    },
    {
        .artist = "EVERYT",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 1, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 5
    },
    {
        .artist = "EXCISI",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 1, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 7
    },
    {
        .artist = "EX6For",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 13, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 14, .unit.minute = 30},
        .genre = NO_GENRE,
        .popularity = 0
    },
    {
        .artist = "G JONE",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 45},
        .genre = DnB,
        .popularity = 80
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
        .popularity = 18
    },
    {
        .artist = "GREEN ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 33
    },
    {
        .artist = "H&RRY ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 0
    },
    {
        .artist = "HAMDI ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 43
    },
    {
        .artist = "HIATUS",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 30},
        .genre = SOUL,
        .popularity = 12
    },
    {
        .artist = "HYPERB",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 38
    },
    {
        .artist = "INZO  ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 30},
        .genre = CHILL,
        .popularity = 47
    },
    {
        .artist = "IT'S M",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 45},
        .genre = DANCE,
        .popularity = 31
    },
    {
        .artist = "IVY LA",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 16, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 17, .unit.minute = 15},
        .genre = DnB,
        .popularity = 73
    },
    {
        .artist = "JASON ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 30},
        .genre = DANCE,
        .popularity = 100
    },
    {
        .artist = "JASON ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 100
    },
    {
        .artist = "JJUUJJ",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 16, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 0},
        .genre = JAM,
        .popularity = 102
    },
    {
        .artist = "JJUUJJ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 0},
        .genre = JAM,
        .popularity = 102
    },
    {
        .artist = "JOHN S",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 3, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 8
    },
    {
        .artist = "JUELZ ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 30},
        .genre = CHILL,
        .popularity = 70
    },
    {
        .artist = "KALLAG",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 108
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
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 72
    },
    {
        .artist = "KNOCK2",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 1, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 32
    },
    {
        .artist = "LAYTON",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 0},
        .genre = TECHNO,
        .popularity = 36
    },
    {
        .artist = "LE YOU",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 0},
        .genre = CHILL,
        .popularity = 45
    },
    {
        .artist = "LEAGUE",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 17, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 0},
        .genre = JAM,
        .popularity = 0
    },
    {
        .artist = "LETTUC",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 45},
        .genre = JAM,
        .popularity = 60
    },
    {
        .artist = "LEVEL ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 18, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 65
    },
    {
        .artist = "LEVITY",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 61
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
        .popularity = 51
    },
    {
        .artist = "LP GIO",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 2, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 27
    },
    {
        .artist = "LSZEE ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 3, .unit.minute = 0},
        .genre = BASS,
        .popularity = 37
    },
    {
        .artist = "LUCII ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 30},
        .genre = DUBSTEP,
        .popularity = 69
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
        .popularity = 74
    },
    {
        .artist = "MADDY ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 17, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .genre = CHILL,
        .popularity = 85
    },
    {
        .artist = "MAJOR ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 13
    },
    {
        .artist = "MARSH ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 48
    },
    {
        .artist = "MASCOL",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 30},
        .genre = POP,
        .popularity = 82
    },
    {
        .artist = "MASONI",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 0
    },
    {
        .artist = "MATROD",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 28
    },
    {
        .artist = "MAU P ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 23
    },
    {
        .artist = "MICHAE",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 30},
        .genre = DANCE,
        .popularity = 52
    },
    {
        .artist = "MOJAVE",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 101
    },
    {
        .artist = "MOONTR",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 0},
        .genre = SOUL,
        .popularity = 67
    },
    {
        .artist = "NEIL F",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 2, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 3, .unit.minute = 15},
        .genre = INDIE,
        .popularity = 15
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
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 0},
        .genre = POP,
        .popularity = 98
    },
    {
        .artist = "NEOMA ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 30},
        .genre = POP,
        .popularity = 98
    },
    {
        .artist = "ODEN &",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 44
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
        .popularity = 105
    },
    {
        .artist = "PEACH ",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 15},
        .genre = INDIE,
        .popularity = 29
    },
    {
        .artist = "POLITI",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 2, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 3, .unit.minute = 0},
        .genre = CHILL,
        .popularity = 111
    },
    {
        .artist = "POLYRH",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 15},
        .genre = SOUL,
        .popularity = 91
    },
    {
        .artist = "PRETYL",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 45},
        .genre = BASS,
        .popularity = 22
    },
    {
        .artist = "PRETYP",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 58
    },
    {
        .artist = "PROXIM",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 15},
        .genre = JAM,
        .popularity = 49
    },
    {
        .artist = "RANGER",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 16, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 88
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
        .popularity = 77
    },
    {
        .artist = "REDRUM",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 0},
        .genre = CHILL,
        .popularity = 109
    },
    {
        .artist = "SAMMY ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 15},
        .genre = DnB,
        .popularity = 25
    },
    {
        .artist = "SARA L",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 30},
        .genre = TECHNO,
        .popularity = 42
    },
    {
        .artist = "SEVEN ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = BASS,
        .popularity = 14
    },
    {
        .artist = "SHAE D",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 107
    },
    {
        .artist = "SHAE D",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 16, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 17, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 107
    },
    {
        .artist = "SHAUN ",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 30},
        .genre = DANCE,
        .popularity = 78
    },
    {
        .artist = "SLAYYY",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 0},
        .genre = POP,
        .popularity = 24
    },
    {
        .artist = "STRING",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 0},
        .genre = JAM,
        .popularity = 56
    },
    {
        .artist = "STRING",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 30},
        .genre = JAM,
        .popularity = 56
    },
    {
        .artist = "SUBTRO",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 16
    },
    {
        .artist = "SULTAN",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 30},
        .genre = CHILL,
        .popularity = 34
    },
    {
        .artist = "SUPER ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 0},
        .genre = DnB,
        .popularity = 95
    },
    {
        .artist = "SWAYLO",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 114
    },
    {
        .artist = "SWAYLO",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 114
    },
    {
        .artist = "THOUGH",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .genre = CHILL,
        .popularity = 96
    },
    {
        .artist = "TRIPP ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .genre = CHILL,
        .popularity = 93
    },
    {
        .artist = "TSHA  ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 53
    },
    {
        .artist = "TSHA  ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 53
    },
    {
        .artist = "UMPHRE",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 45},
        .genre = JAM,
        .popularity = 62
    },
    {
        .artist = "UNUSUA",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 15},
        .genre = POP,
        .popularity = 75
    },
    {
        .artist = "UNUSUA",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 45},
        .genre = POP,
        .popularity = 75
    },
    {
        .artist = "VENBEE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 41
    },
    {
        .artist = "VINI V",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 2, .unit.minute = 30},
        .genre = TECHNO,
        .popularity = 10
    },
    {
        .artist = "VNSSA ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 81
    },
    {
        .artist = "WESTEN",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 40
    },
    {
        .artist = "WESTEN",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 40
    },
    {
        .artist = "WHYTE ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 30},
        .genre = BASS,
        .popularity = 97
    },
    {
        .artist = "WILL C",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 71
    },
    {
        .artist = "WOOLI ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 2, .unit.minute = 0},
        .genre = DnB,
        .popularity = 35
    },
    {
        .artist = " YOGA1",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 12, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 13, .unit.minute = 15},
        .genre = NO_GENRE,
        .popularity = 0
    },
    {
        .artist = " YOGA2",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 12, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 13, .unit.minute = 15},
        .genre = NO_GENRE,
        .popularity = 0
    },
    {
        .artist = " YOGA3",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 12, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 13, .unit.minute = 15},
        .genre = NO_GENRE,
        .popularity = 0
    },
    {
        .artist = "ZEN SE",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 30},
        .genre = DnB,
        .popularity = 106
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
