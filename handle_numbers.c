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
		*count += 1;
		num = -num;
	}
	temp = num;
	while (temp / 10 != 0)
	{
		divisor *= 10;
		temp /= 10;
	}
	while (divisor != 0)
	{
		putchar((num / divisor) + '0');
		*count += 1;
		num %= divisor;
		divisor /= 10;
	}
}
