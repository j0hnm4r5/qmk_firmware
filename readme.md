# @j0hnm4r5 Custom QMK Firmware (For SpaceCat Launch Pad)

## Installation Instructions

```sh
brew tap osx-cross/avr
brew tap PX4/homebrew-px4
brew update
brew install avr-gcc dfu-programmer gcc-arm-none-eabi avrdude
```

## Keymaps

Modify the keymap at `./keyboards/launchpad/keymaps/j0hnm4r5/keymap.c`

## Build Instructions

```sh
make launchpad/rev1:j0hnm4r5:avrdude
```

### References

-   [SpaceCat Launch Pad](https://spacecat.design/collections/pcbs-cases-kits/products/launch-pad)
-   [Keycodes](https://docs.qmk.fm/#/faq_keymap)
