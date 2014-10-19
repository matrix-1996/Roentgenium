#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_

/**
 * @file keyboard.h
 * @author Konstantin Tcholokachvili
 * @date 2007, 2013, 2014
 * @license MIT License
 * 
 * Keyboard handling
 */

#include <arch/x86/registers.h>
#include <io/console.h>
#include <lib/types.h>

#define KEYBOARD_DATA_PORT	0x60
#define KEYBOARD_COMMAND_PORT	0x64

#define KBD_CR_NL 	0x0a
#define KBD_BACKSPACE 	0x08
#define KBD_TABULATION	0x09

#define KEY_CTRL 0x1C

/** Handles keyboard
 *
 * @param r Registers status during the interrupt
 */
void keyboard_interrupt_handler(int number);

void keyboard_setup(struct console *term);

uchar_t keyboard_get_keymap(uchar_t i);

#endif // _KEYBOARD_H_
