#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
void handle_string(va_list args, int *count);
void handle_char(va_list args, int *count);
int handle_integer(va_list args);
int handle_decimal(va_list args);
#endif
