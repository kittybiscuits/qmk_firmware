/* Copyright 2018 MechMerlin
 * Copyright 2018 Logan Huskins
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// place overrides here

/*
 * This allows us to press Shift+Esc to get a tilde ("~") character. Unfortunately,
 * this breaks certain key combinations. The following #defines restore those key
 * combinations while still allowing Shift+Esc to send a tilde character.
 *
 * See: https://github.com/qmk/qmk_firmware/blob/master/docs/feature_grave_esc.md
 *
 * GRAVE_ESC_ALT_OVERRIDE  - Allows Command+Option+Escape to work on Macs.
 * GRAVE_ESC_CTRL_OVERRIDE - Allows Control+Shift+Escape to work on Windows.
 * GRAVE_ESC_GUI_OVERRIDE  - Just in case. :)
 */
#define GRAVE_ESC_ALT_OVERRIDE     // Always send Escape if Alt is pressed
#define GRAVE_ESC_CTRL_OVERRIDE    // Always send Escape if Control is pressed
#define GRAVE_ESC_GUI_OVERRIDE     // Always send Escape if GUI is pressed
//#define GRAVE_ESC_SHIFT_OVERRIDE // Always send Escape if Shift is pressed

