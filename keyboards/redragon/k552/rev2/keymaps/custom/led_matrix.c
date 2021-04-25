#include <string.h>
#include "rgb.h"
#include "rgb_matrix.h"
#include "rgb_matrix_types.h"
#include "color.h"
#include "ws2812.c"

/*
    COLS key / led
    PWM PWM00A - PWM21A (PWM15A unused)
    2ty transistors PNP driven high
    base      - GPIO
    collector - LED Col pins
    emitter   - VDD

    VDD     GPIO
    (E)     (B)
     |  PNP  |
     |_______|
         |
         |
        (C)
        LED

    ROWS RGB
    PWM PWM22A - PWM21B (PWM10B unused)
    C 0-15
    j3y transistors NPN driven low
    base      - GPIO
    collector - LED RGB row pins
    emitter   - GND

        LED
        (C)
         |
         |
      _______
     |  NPN  |
     |       |
    (B)     (E)
    GPIO    GND
*/

LED_TYPE led_state[DRIVER_LED_TOTAL];
LED_TYPE new_led_state[DRIVER_LED_TOTAL];
LED_TYPE rgb_matrix_ws2812_array[RGBLED_NUM];

void init(void) {}

static void flush(void) {
    int x = 0;
    for (int i=0; i<DRIVER_LED_TOTAL; i++) {
        if (i == 65 || i == 66 || i == 67 || i == 94 || i == 95 || i == 96 || i == 97 || i == 98) {
            rgb_matrix_ws2812_array[7 - x] = new_led_state[i];
            x++;
#    ifdef RGBW
            convert_rgb_to_rgbw(&rgb_matrix_ws2812_array[i]);
#    endif
        } else {
            led_state[i] = new_led_state[i];
        }
    }
    ws2812_setleds(rgb_matrix_ws2812_array, RGBLED_NUM);
}

void set_color(int index, uint8_t r, uint8_t g, uint8_t b) {
    new_led_state[index].r = r;
    new_led_state[index].g = g;
    new_led_state[index].b = b;
}

static void set_color_all(uint8_t r, uint8_t g, uint8_t b) {
    for (int i=0; i<(DRIVER_LED_TOTAL); i++)
        set_color(i, r, g, b);
}

const rgb_matrix_driver_t rgb_matrix_driver = {
    .init          = init,
    .flush         = flush,
    .set_color     = set_color,
    .set_color_all = set_color_all,
};

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(LED_CAPS_LOCK_PIN, !led_state.caps_lock);
        writePin(LED_SCROLL_LOCK_PIN, !led_state.scroll_lock);
    }
    return res;
}
