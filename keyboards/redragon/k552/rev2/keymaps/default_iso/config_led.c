#ifdef RGB_MATRIX_ENABLE

#include "rgb_matrix.h"
#include "config_led.h"

led_config_t g_led_config = { {
    {   0,      1,      2,      3,      4,      5,      6,      7,      8,      9,     10,     11,     12, NO_LED,     14,     15,     16  },
    {  17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     29,     30,     31,     32,     33  },
    {  34,     35,     36,     37,     38,     39,     40,     41,     42,     43,     44,     45,     46, NO_LED,     48,     49,     50  },
    {  51,     52,     53,     54,     55,     56,     57,     58,     59,     60,     61,     62,     63,     64, NO_LED, NO_LED, NO_LED  },
    {  68,     69,     70,     71,     72,     73,     74,     75,     76,     77,     78,     79, NO_LED,     81, NO_LED,     83, NO_LED  },
    {  85,     86,     87,     88,     89,     90,     91, NO_LED,     93, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED,     99,    100,    101  }
}, {
    {0  ,  0}, {26 ,  0}, {39 ,  0}, {52 ,  0}, {65 ,  0}, {84 ,  0}, {97 ,  0}, {110,  0}, {123,  0}, {143,  0}, {156,  0}, {169,  0}, {182,  0}, {255,255}, {198,  0}, {211,  0}, {224,  0},
    {0  , 17}, {13 , 17}, {26 , 17}, {39 , 17}, {52 , 17}, {65 , 17}, {78 , 17}, {91 , 17}, {104, 17}, {117, 17}, {130, 17}, {143, 17}, {156, 17}, {175, 17}, {198, 17}, {211, 17}, {224, 17},
    {3  , 29}, {19 , 29}, {32 , 29}, {45 , 29}, {58 , 29}, {71 , 29}, {84 , 29}, {97 , 29}, {110, 29}, {123, 29}, {136, 29}, {149, 29}, {162, 29}, {179, 29}, {198, 29}, {211, 29}, {224, 29},
    {5  , 41}, {23 , 41}, {36 , 41}, {49 , 41}, {62 , 41}, {75 , 41}, {88 , 41}, {101, 41}, {114, 41}, {127, 41}, {140, 41}, {153, 41}, {162, 41}, {174, 41}, {255,255}, {255,255}, {255,255},
    {8  , 52}, {18 , 52}, {29 , 52}, {42 , 52}, {55 , 52}, {68 , 52}, {81 , 52}, {94 , 52}, {107, 52}, {120, 52}, {133, 52}, {146, 52}, {255,255}, {170, 52}, {255,255}, {211, 52}, {255,255},
    {2  , 64}, {18 , 64}, {34 , 64}, {83 , 64}, {131, 64}, {148, 64}, {164, 64}, {255,255}, {180, 64}, {255,255}, {255,255}, {255,255}, {255,255}, {255,255}, {198, 64}, {211, 64}, {224, 64},
}, {
   5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 5,
   4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5,
   5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 5, 5, 5,
   5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 0, 0, 0,
   5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 5, 0, 5, 0,
   5, 5, 5, 4, 5, 5, 5, 0, 5, 0, 0, 0, 0, 0, 5, 5, 5,
} };


#endif
