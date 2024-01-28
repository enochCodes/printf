#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
void handle_integer(va_list args, int *count);
void _putchar(char c, int *count);
#endif
