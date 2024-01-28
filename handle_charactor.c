#include "main.h"
/**
 * handle_char - Handles the 'c' conversion specifier in _printf
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
/**
 * handle_string - Handles the 's' conversion specifier in _printf
 * @args: va_list containing the arguments
 * @count: pointer to the count of characters printed
 */
void handle_string(va_list args, int *count)
{
	int j;
	char *str;

	str = va_arg(args, char *);

	for (j = 0; str[j] != '\0'; j++)
	{
		putchar(str[j]);
		(*count)++;
	}
}