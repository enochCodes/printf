#include "main.h"
void handle_char(va_list args, int *count)
{
	char ch;

	ch = va_arg(args, int);
	putchar(ch);
	(*count)++;
}
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
/**
 * _printf - function handles the following format specifiers:
 */
int _printf(const char *format, ...)
{
	int count, i;
	va_list args;

	count = 0;
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			count++;
		}
		else
		{
			switch (format[i + 1])
			{
				case 'c':
					handle_char(args, &count);
					break;
				case 's':
					handle_string(args, &count);
					break;
				case 'd':
					handle_decimal(args, &count);
					break;
				case '%':
					putchar('%');
					count++;
					break;
				default:
				putchar('%');
				putchar(format[i + 1]);
				count += 2;
				break;
			}
			i++;
		}
	}
	va_end(args);
	return (count);
}
