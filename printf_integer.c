#include "main.h"
/**
 * handle_integer - print integer form va_args
 * @args: va_list arguments
 * @count:pointer to the character count
 */
void handle_integer(va_list args, int *count)
{
	int num;
	int divisor;
	int temp;

	num = va_arg(args, int);
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
		int digit = num / divisor;
		putchar(divisor + '0');
		*count += i;
		num %= divisor;
		divisor / 10;
	}
}
