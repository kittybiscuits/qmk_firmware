# How to flash

## Compile firmware

    $ make jj40:kittybiscuits

## Flash firmware

I was unable to find a working `bootloadHID` binary for MacOS.

1. Download [HUDBootFlash](https://www.obdev.at/products/vusb/bootloadhid.html) for Windows.
1. `bootloadHID.exe -r jj40_kittybiscuits.hex`

