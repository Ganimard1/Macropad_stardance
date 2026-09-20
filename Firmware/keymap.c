
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MPRV,        // SW1 (GP3) - Rewind
        LALT(KC_TAB),   // SW2 (GP2) - Alt+Tab
        KC_MNXT,        // SW3 (GP1) - Skip
        KC_MUTE         // SW4 (GP26) - Encoder button press
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

// OLED display code
bool oled_task_user(void) {
    oled_write_P(PSTR("Vol Ctrl\n"), false);
    return false;
}