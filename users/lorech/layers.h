/**
 * Copyright 2025 Lauris Patriks Dedumets
 *
 * Licensed under the GNU General Public License, version 2 or later.
 * See <https://www.gnu.org/licenses/> for details.
 */

#pragma once

enum userspace_layers {
    _QWERTY,
    /* TODO: Figure out how to keep this as an option without bricking keyboards that use this enum. */
    /* _COLEMAK, */
    _COLEMAK_DH,
    _DVORAK,
    _PLOVER,
    _LOWER,
    _UPPER,
    _ADJUST,
};
