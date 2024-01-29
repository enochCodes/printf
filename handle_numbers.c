#include "main.h"
/**
 * handle_decimal - handles the 'd' conversion specifier in _printf
 * @args: va_list containing the arguments
 * @count: pointer to the count od charactors printed
 */
void handle_decimal(va_list args, int *count)
{
	int num;
	int temp;
	int divisor;

	num = va_arg(args, int);
	divisor = 1;
	temp = num;

	if (num < 0)
	{
		putchar('-');
		(*count)++;
		num = -num;
	}
	while (temp > 9)
	{
		temp /= 10;
		divisor *= 10;
	}
	while (divisor > 0)
	{
		int digit = num / divisor;

		putchar(digit + '0');
		(*count)++;
		num %= divisor;
		divisor /= 10;
	}
}
