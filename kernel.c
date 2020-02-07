/*
* Copyright (C) 2014  Arjun Sreedharan
* License: GPL version 2 or higher http://www.gnu.org/licenses/gpl.html
*/

#include "./drivers/screen/screen.h"
#include "./drivers/idt/idt.h"
#include "./drivers/keyboard/keyboard.h"

#include "kmain.h"

void kmain(void)
{
    const char *str = "VimOS 0.0.1";

    kernel_clear_screen();
    kernel_print(str);

    kernel_print_newline();
    kernel_print_newline();

    idt_init((unsigned long) keyboard_handler);
    kb_init();

    while(1)
	    ;
}

