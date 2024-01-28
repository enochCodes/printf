#include "main.h"
/**
 * _putchar - Custom putchar function
 * @c: The character to be printed
 * @count: Pointer to the count of printed characters
 */
void _putchar(char c, int *count)
{
	putchar(c);
	(*count)++;
}

/**
 * handle_decimal - Handle the 'd' and 'i' format specifiers
 * @args: Arguments list
 * @count: Pointer to the count of printed characters
 */
void handle_decimal(va_list args, int *count)
{
	int num = va_arg(args, int);
	int divisor = 1;

	if (num < 0)
	{
		_putchar('-', count);
		num = -num;
		}

while (num / divisor > 9)
{
	divisor *= 10;
	while (divisor != 0)
	{
		_putchar((num / divisor) + '0', count);
		num %= divisor;
		divisor /= 10;
	}
}
}
