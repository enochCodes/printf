#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
void handle_decimal(va_list args, int *count);
#endif
