Unable to build this firmware.

Use json file: 1upkeyboards_60hse_kittybiscuits.json
At: https://config.qmk.fm/#/1upkeyboards/1up60hse/LAYOUT_60_ansi

Using QMK Configurator due to the following error during compile:

$ make 1upkeyboards/1up60hse:kittybiscuits
QMK Firmware 0.6.325
Making 1upkeyboards/1up60hse with keymap kittybiscuits

avr-gcc (GCC) 4.8.1
Copyright (C) 2013 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

Compiling: tmk_core/common/command.c                                                                [OK]
Linking: .build/1upkeyboards_1up60hse_kittybiscuits.elf                                             [ERRORS]
 |
 | In function ‘__vector_21’:
 | tmk_core/common/avr/timer.c:149:1: error: ‘_vector_21’ appears to be a misspelled interrupt handler [-Werror]
 |  ISR(TIMER_INTERRUPT_VECTOR, ISR_NOBLOCK)
 |  ^
 | lto1: all warnings being treated as errors
 | lto-wrapper: avr-gcc returned 1 exit status
 | /usr/lib/gcc/avr/4.8.1/../../../avr/bin/ld: lto-wrapper failed
 | collect2: error: ld returned 1 exit status
 |
tmk_core/rules.mk:290: recipe for target '.build/1upkeyboards_1up60hse_kittybiscuits.elf' failed
make[1]: *** [.build/1upkeyboards_1up60hse_kittybiscuits.elf] Error 1
Make finished with errors
Makefile:535: recipe for target '1upkeyboards/1up60hse:kittybiscuits' failed
make: *** [1upkeyboards/1up60hse:kittybiscuits] Error 1

