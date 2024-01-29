#include "main.h"
/**
 * handle_char - handles the 'c' conversion specifier in _printf
 * @args: va_list containing the arguments
 * @count: pointer to the count of characters printed
 */
void handle_char(va_list args, int *count)
{
	char ch;

	ch = va_arg(args, int);
	putchar(ch);
	(*count)++;
}

