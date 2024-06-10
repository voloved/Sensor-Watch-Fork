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
        .popularity = 18
    },
    {
        .artist = "AK SPO",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 15},
        .genre = DnB,
        .popularity = 100
    },
    {
        .artist = "ALLEYC",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 17, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 18, .unit.minute = 30},
        .genre = DUBSTEP,
        .popularity = 73
    },
    {
        .artist = "ATLIEN",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 51
    },
    {
        .artist = "AYYBO ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 35
    },
    {
        .artist = "BAGGI ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 99
    },
    {
        .artist = "BARCLA",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 30},
        .genre = BASS,
        .popularity = 79
    },
    {
        .artist = "BEN BO",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 1, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 10
    },
    {
        .artist = "BLACK ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 2, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 3, .unit.minute = 15},
        .genre = DUBSTEP,
        .popularity = 46
    },
    {
        .artist = "BLASTO",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .genre = TECHNO,
        .popularity = 55
    },
    {
        .artist = "BOOGIE",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 15},
        .genre = DUBSTEP,
        .popularity = 59
    },
    {
        .artist = "BOOGIE",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 15},
        .genre = JAM,
        .popularity = 90
    },
    {
        .artist = "BRANDI",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 112
    },
    {
        .artist = "BRANDI",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 112
    },
    {
        .artist = "CALUSS",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 60
    },
    {
        .artist = "CANABL",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 16, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 82
    },
    {
        .artist = "CANNON",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 16
    },
    {
        .artist = "CASPA ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 83
    },
    {
        .artist = "CASSIA",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 42
    },
    {
        .artist = "CHAOS ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 50
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
        .popularity = 64
    },
    {
        .artist = "CUCO  ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .genre = INDIE,
        .popularity = 85
    },
    {
        .artist = "DAVE Y",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 0},
        .genre = JAM,
        .popularity = 108
    },
    {
        .artist = "DAVE Y",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 15, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 16, .unit.minute = 30},
        .genre = JAM,
        .popularity = 108
    },
    {
        .artist = "DAVE Y",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 15},
        .genre = JAM,
        .popularity = 108
    },
    {
        .artist = "DIMENS",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .genre = DnB,
        .popularity = 24
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
        .popularity = 80
    },
    {
        .artist = "DIXON'",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = SOUL,
        .popularity = 106
    },
    {
        .artist = "DIXON'",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 16, .unit.minute = 0},
        .genre = SOUL,
        .popularity = 106
    },
    {
        .artist = "DIXON'",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 15, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 16, .unit.minute = 30},
        .genre = SOUL,
        .popularity = 106
    },
    {
        .artist = "DIXON'",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 1, .unit.minute = 45},
        .genre = SOUL,
        .popularity = 106
    },
    {
        .artist = "DJ BRO",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 109
    },
    {
        .artist = "DJ BRO",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 109
    },
    {
        .artist = "DJ SUS",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 86
    },
    {
        .artist = "DRAMA ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 28
    },
    {
        .artist = "DUMPST",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 17, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 45},
        .genre = JAM,
        .popularity = 88
    },
    {
        .artist = "EGGY  ",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 17, .unit.minute = 30},
        .genre = JAM,
        .popularity = 95
    },
    {
        .artist = "EMO NI",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 30},
        .genre = INDIE,
        .popularity = 113
    },
    {
        .artist = "EQUANI",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 45},
        .genre = INDIE,
        .popularity = 53
    },
    {
        .artist = "EQUANI",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 30},
        .genre = INDIE,
        .popularity = 53
    },
    {
        .artist = "EVERYT",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 1, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 72
    },
    {
        .artist = "EXCISI",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 1, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 6
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
        .popularity = 77
    },
    {
        .artist = "GIGANT",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 1, .unit.minute = 30},
        .genre = DUBSTEP,
        .popularity = 118
    },
    {
        .artist = "GOODBO",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 45},
        .genre = INDIE,
        .popularity = 17
    },
    {
        .artist = "GREEN ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 31
    },
    {
        .artist = "H&RRY ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 115
    },
    {
        .artist = "HAMDI ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 39
    },
    {
        .artist = "HIATUS",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 30},
        .genre = SOUL,
        .popularity = 11
    },
    {
        .artist = "HYPERB",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 0},
        .genre = DUBSTEP,
        .popularity = 121
    },
    {
        .artist = "INZO  ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 30},
        .genre = CHILL,
        .popularity = 43
    },
    {
        .artist = "IT'S M",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 45},
        .genre = DANCE,
        .popularity = 29
    },
    {
        .artist = "IVY LA",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 16, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 17, .unit.minute = 15},
        .genre = DnB,
        .popularity = 69
    },
    {
        .artist = "JASON ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 30},
        .genre = DANCE,
        .popularity = 96
    },
    {
        .artist = "JASON ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 96
    },
    {
        .artist = "JJUUJJ",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 16, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 0},
        .genre = JAM,
        .popularity = 98
    },
    {
        .artist = "JJUUJJ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 0},
        .genre = JAM,
        .popularity = 98
    },
    {
        .artist = "JOHN S",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 3, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 7
    },
    {
        .artist = "JUELZ ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 30},
        .genre = CHILL,
        .popularity = 66
    },
    {
        .artist = "KALLAG",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 104
    },
    {
        .artist = "KENNY ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 15},
        .genre = RAP,
        .popularity = 19
    },
    {
        .artist = "KILTRO",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = INDIE,
        .popularity = 68
    },
    {
        .artist = "KNOCK2",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 1, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 30
    },
    {
        .artist = "LAYTON",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 0},
        .genre = TECHNO,
        .popularity = 34
    },
    {
        .artist = "LE YOU",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 0},
        .genre = CHILL,
        .popularity = 41
    },
    {
        .artist = "LEAGUE",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 17, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 0},
        .genre = JAM,
        .popularity = 116
    },
    {
        .artist = "LETTUC",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 45},
        .genre = JAM,
        .popularity = 56
    },
    {
        .artist = "LEVEL ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 18, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 61
    },
    {
        .artist = "LEVITY",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 57
    },
    {
        .artist = "LIBIAN",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 0},
        .genre = RAP,
        .popularity = 8
    },
    {
        .artist = "LITTLE",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 1, .unit.minute = 0},
        .genre = RAP,
        .popularity = 47
    },
    {
        .artist = "LP GIO",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 2, .unit.minute = 0},
        .genre = DANCE,
        .popularity = 25
    },
    {
        .artist = "LSZEE ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 3, .unit.minute = 0},
        .genre = BASS,
        .popularity = 119
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
        .popularity = 70
    },
    {
        .artist = "MADDY ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 17, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .genre = CHILL,
        .popularity = 81
    },
    {
        .artist = "MAJOR ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 12
    },
    {
        .artist = "MARSH ",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 44
    },
    {
        .artist = "MASCOL",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 18, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 30},
        .genre = POP,
        .popularity = 78
    },
    {
        .artist = "MASONI",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 110
    },
    {
        .artist = "MATROD",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 26
    },
    {
        .artist = "MAU P ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 21
    },
    {
        .artist = "MICHAE",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 30},
        .genre = DANCE,
        .popularity = 48
    },
    {
        .artist = "MOJAVE",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 97
    },
    {
        .artist = "MOONTR",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 0},
        .genre = SOUL,
        .popularity = 63
    },
    {
        .artist = "NEIL F",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 2, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 3, .unit.minute = 15},
        .genre = INDIE,
        .popularity = 14
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
        .popularity = 94
    },
    {
        .artist = "NEOMA ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 20, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 30},
        .genre = POP,
        .popularity = 94
    },
    {
        .artist = "ODEN &",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 40
    },
    {
        .artist = "ONLY F",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 76
    },
    {
        .artist = "PAPERW",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = RAP,
        .popularity = 101
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
        .genre = CHILL,
        .popularity = 107
    },
    {
        .artist = "POLYRH",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 21, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 22, .unit.minute = 15},
        .genre = SOUL,
        .popularity = 87
    },
    {
        .artist = "PRETYL",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 45},
        .genre = BASS,
        .popularity = 20
    },
    {
        .artist = "PRETYP",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 20, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 54
    },
    {
        .artist = "PROXIM",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 15},
        .genre = JAM,
        .popularity = 45
    },
    {
        .artist = "RANGER",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 16, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 17, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 84
    },
    {
        .artist = "RAWAYA",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 17, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 18, .unit.minute = 30},
        .genre = SOUL,
        .popularity = 5
    },
    {
        .artist = "RAYBEN",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 20, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 74
    },
    {
        .artist = "REDRUM",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 0},
        .genre = CHILL,
        .popularity = 105
    },
    {
        .artist = "SAMMY ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 15},
        .genre = DnB,
        .popularity = 23
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
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = BASS,
        .popularity = 13
    },
    {
        .artist = "SHAE D",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 103
    },
    {
        .artist = "SHAE D",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 16, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 17, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 103
    },
    {
        .artist = "SHAUN ",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 30},
        .genre = DANCE,
        .popularity = 75
    },
    {
        .artist = "SLAYYY",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 23, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 24, .unit.hour = 0, .unit.minute = 0},
        .genre = POP,
        .popularity = 22
    },
    {
        .artist = "STRING",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 0},
        .genre = JAM,
        .popularity = 52
    },
    {
        .artist = "STRING",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 19, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 23, .unit.minute = 30},
        .genre = JAM,
        .popularity = 52
    },
    {
        .artist = "SUBTRO",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 0, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 1, .unit.minute = 45},
        .genre = DUBSTEP,
        .popularity = 15
    },
    {
        .artist = "SULTAN",
        .stage = CAROUSEL_CLUB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 30},
        .genre = CHILL,
        .popularity = 32
    },
    {
        .artist = "SUPER ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 0, .unit.minute = 0},
        .genre = DnB,
        .popularity = 91
    },
    {
        .artist = "SWAYLO",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 111
    },
    {
        .artist = "SWAYLO",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 19, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 111
    },
    {
        .artist = "THOUGH",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 19, .unit.minute = 15},
        .genre = CHILL,
        .popularity = 92
    },
    {
        .artist = "TRIPP ",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .genre = CHILL,
        .popularity = 89
    },
    {
        .artist = "TSHA  ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 20, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 49
    },
    {
        .artist = "TSHA  ",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 23, .unit.minute = 30},
        .genre = HOUSE,
        .popularity = 49
    },
    {
        .artist = "UMPHRE",
        .stage = RANCH_ARENA,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 21, .unit.minute = 15},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 22, .unit.minute = 45},
        .genre = JAM,
        .popularity = 58
    },
    {
        .artist = "UNUSUA",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 15},
        .genre = POP,
        .popularity = 71
    },
    {
        .artist = "UNUSUA",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 23, .unit.hour = 18, .unit.minute = 45},
        .genre = POP,
        .popularity = 71
    },
    {
        .artist = "VENBEE",
        .stage = NO_STAGE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 0},
        .genre = DnB,
        .popularity = 37
    },
    {
        .artist = "VINI V",
        .stage = OBSERVATORY,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 1, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 2, .unit.minute = 30},
        .genre = TECHNO,
        .popularity = 9
    },
    {
        .artist = "VNSSA ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 120
    },
    {
        .artist = "WESTEN",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 18, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 19, .unit.minute = 15},
        .genre = HOUSE,
        .popularity = 36
    },
    {
        .artist = "WESTEN",
        .stage = HONEYCOMB,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 21, .unit.minute = 0},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 21, .unit.hour = 22, .unit.minute = 0},
        .genre = HOUSE,
        .popularity = 36
    },
    {
        .artist = "WHYTE ",
        .stage = SHERWOOD_COURT,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 22, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 23, .unit.minute = 30},
        .genre = BASS,
        .popularity = 93
    },
    {
        .artist = "WILL C",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 15, .unit.minute = 30},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 20, .unit.hour = 16, .unit.minute = 45},
        .genre = HOUSE,
        .popularity = 67
    },
    {
        .artist = "WOOLI ",
        .stage = TRIPOLEE,
        .start_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 0, .unit.minute = 45},
        .end_time = {.unit.year = 4, .unit.month = 6, .unit.day = 22, .unit.hour = 2, .unit.minute = 0},
        .genre = DnB,
        .popularity = 33
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
        .popularity = 102
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
