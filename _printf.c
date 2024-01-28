#include "main.h"
/**
 * _printf - Custom printf function handel 's' 'd' '%' 'c'
 * @format: Format string
 * Return: The number of characters printed
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
				case 'i':
					handle_integer(args, &count);
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
