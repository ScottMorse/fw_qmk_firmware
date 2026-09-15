// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(layer_0_effect)
RGB_MATRIX_EFFECT(layer_1_effect)
RGB_MATRIX_EFFECT(layer_2_effect)
RGB_MATRIX_EFFECT(layer_3_effect)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

/*  Macropad key location to LED Index
 *         ┌────┬────┬────┬────┐
 *  row 0  │  5 │  2 │ 22 │ 17 │
 *         ├────┼────┼────┼────┤
 *  row 1  │  4 │  0 │ 20 │ 18 │
 *         ├────┼────┼────┼────┤
 *  row 2  │  7 │  1 │ 21 │ 16 │
 *         ├────┼────┼────┼────┤
 *  row 3  │  6 │  3 │ 23 │ 19 │
 *         ├────┼────┼────┼────┤
 *  row 4  │  9 │ 11 │ 15 │ 13 │
 *         ├────┼────┼────┼────┤
 *  row 5  │  8 │ 10 │ 14 │ 12 │
 *         └────┴────┴────┴────┘
 *        24 keys and LEDs total
 */





static bool layer_0_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
        switch (i) {
            // row 0
            case 5:
                rgb_matrix_set_color(i, 0x00, 0x00, 0x10);
                break;
            case 2:
            case 22:
            case 17:
                rgb_matrix_set_color(i, 0x05, 0x05, 0x05);
                break;
            // row 1
            case 4:
            case 0:
            case 20:
            case 18:
            // row 2
            case 7:
            case 1:
            case 21:
            case 16:
                rgb_matrix_set_color(i, 0x00, 0x00, 0x05);
                break;
            // row 3
            case 6:
            case 3:
            case 23:
            case 19:
            // row 4
            case 9:
            case 11:
            case 15:
            case 13:
                rgb_matrix_set_color(i, 0x00, 0x04, 0x05);
                break;
            // row 5
            case 8:
                rgb_matrix_set_color(i, 0x05, 0x00, 0x00);
                break;
            case 10:
            case 14:
                rgb_matrix_set_color(i, 0x00, 0x02, 0x05);
                break;
            case 12:
                rgb_matrix_set_color(i, 0x00, 0x05, 0x05);
                break;
            default:
                rgb_matrix_set_color(i, RGB_OFF);
                break;
        }
    }
    return rgb_matrix_check_finished_leds(led_max);
}

static bool layer_1_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
        switch (i) {
            case 2:
                rgb_matrix_set_color(i, 0x00, 0x05, 0x00);
                break;
            case 5:
            case 22:
            case 17:
                rgb_matrix_set_color(i, 0x05, 0x05, 0x05);
                break;
            // row 1
            case 4:
                rgb_matrix_set_color(i, 0x03, 0x01, 0x00);
                break;
            case 0:
                rgb_matrix_set_color(i, 0x00, 0x05, 0x01);
                break;
            case 20:
                rgb_matrix_set_color(i, 0x02, 0x02, 0x03);
                break;
            case 18:
                rgb_matrix_set_color(i, 0x02, 0x01, 0x00);
                break;
            // row 2
            case 7:
                rgb_matrix_set_color(i, 0x01, 0x00, 0x03);
                break;
            case 1:
                rgb_matrix_set_color(i, 0x00, 0x05, 0x03);
                break;
            case 21:
                rgb_matrix_set_color(i, 0x01, 0x01, 0x02);
                break;
            case 16:
                rgb_matrix_set_color(i, 0x00, 0x01, 0x01);
                break;
            // row 3
            case 6:
                rgb_matrix_set_color(i, 0x04, 0x04, 0x00);
                break;
            case 3:
                rgb_matrix_set_color(i, 0x00, 0x01, 0x03);
                break;
            case 23:
                rgb_matrix_set_color(i, 0x01, 0x01, 0x00);
                break;
            case 19:
                rgb_matrix_set_color(i, 0x01, 0x01, 0x01);
                break;
            // row 4
            case 9:
                rgb_matrix_set_color(i, 0x00, 0x01, 0x04);
                break;
            case 11:
                rgb_matrix_set_color(i, 0x00, 0x01, 0x03);
                break;
            case 15:
                rgb_matrix_set_color(i, 0x00, 0x01, 0x03);
                break;
            case 13:
                rgb_matrix_set_color(i, 0x00, 0x01, 0x03);
                break;
            default:
                rgb_matrix_set_color(i, RGB_OFF);
                break;
        }
    }
    return rgb_matrix_check_finished_leds(led_max);
}

static bool layer_2_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
        switch (i) {
            case 22:
                rgb_matrix_set_color(i, 0x00, 0x00, 0x20);
                break;
            case 5:
            case 2:
            case 17:
                rgb_matrix_set_color(i, 0x05, 0x05, 0x05);
                break;
            default:
                rgb_matrix_set_color(i, RGB_OFF);
                break;
        }
    }
    return rgb_matrix_check_finished_leds(led_max);
}

static bool layer_21_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
        switch (i) {
            case 22:
                rgb_matrix_set_color(i, 0x20, 0x00, 0x00);
                break;
            case 5:
            case 2:
            case 17:
                rgb_matrix_set_color(i, 0x05, 0x05, 0x05);
                break;
            default:
                rgb_matrix_set_color(i, RGB_OFF);
                break;
        }
    }
    return rgb_matrix_check_finished_leds(led_max);
}

static bool layer_3_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
        switch (i) {
            case 17:
                rgb_matrix_set_color(i, 0x00, 0x00, 0x20);
                break;
            case 5:
            case 2:
            case 22:
                rgb_matrix_set_color(i, 0x05, 0x05, 0x05);
                break;
            default:
                rgb_matrix_set_color(i, RGB_OFF);
                break;
        }
    }
    return rgb_matrix_check_finished_leds(led_max);
}
#endif
