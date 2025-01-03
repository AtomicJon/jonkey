# atomicjon/jonkey_v2

![atomicjon/jonkey_v2](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Jon](https://github.com/AtomicJon)
* Hardware Supported: Custom PCB - see the [jonkey](https://github.com/AtomicJon/jonkey) for PCB files
* Hardware Availability: DIY - see above

Before making, ensure the correct target board is configured in [`keyboard.json`](./keyboard.json)
E.g. For pro micro:
```json
"development_board": "promicro",
```

Make example for this keyboard (after setting up your build environment):

    make atomicjon/jonkey_v2:default

Flashing example for this keyboard:

    make atomicjon/jonkey_v2:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
