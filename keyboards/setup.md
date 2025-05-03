# Custom Dactyl Manuform 5x6 Keymap Setup

This document outlines the steps to compile and flash the custom keymap for the handwired Dactyl Manuform 5x6 keyboard.

## Files Edited

*   `handwired/dactyl_manuform/5x6_5/keymaps/custom/keymap.c`: This file defines the key layers, custom keycodes, and overall keyboard behavior for the "custom" keymap.

## Compilation

1.  **Navigate to your QMK firmware directory** in your terminal.
2.  **Run the compile command:**

    ```bash
    qmk compile -kb handwired/dactyl_manuform/5x6_5 -km custom
    ```

    This command tells QMK to compile the firmware (`.hex` or `.bin` file) for the specified keyboard (`-kb handwired/dactyl_manuform/5x6_5`) using your specific keymap (`-km custom`).

## Flashing

1.  **Put your keyboard into bootloader mode.** This usually involves pressing a specific reset button on the microcontroller (Pro Micro, Elite-C, etc.) or holding a specific key combination while plugging it in (often involves the key at `QK_BOOT` in your keymap, which might require accessing a specific layer).
2.  **Use QMK Toolbox** (or your preferred flashing tool) to flash the compiled firmware file onto the microcontroller. The firmware file will be located in the `qmk_firmware/.build/` directory after a successful compilation (e.g., `handwired_dactyl_manuform_5x6_5_custom.hex`).
3.  **Select the microcontroller** (e.g., ATmega32U4 for Pro Micro) in QMK Toolbox, browse to the compiled firmware file, and click "Flash".

Your keyboard should now be running the updated custom keymap.
