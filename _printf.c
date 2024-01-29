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
/**
 * _printf - Custom printf function with limited functionality
 * @format: Format string containing conversion specifiers
 * Return: Number of characters printed (excluding the null byte)
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
