#include "main.h"
/**
 * _printf - Custom printf function with limited functionality
 * @format: Format string containing conversion specifiers
 * Return: Number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	count = process_format(format, args);
	va_end(args);

	return (count);
}

/**
 * process_format - Process the format string and handle conversions
 * @format: Format string containing conversion specifiers
 * @args: Variable arguments list
 * Return: Number of characters printed (excluding the null byte)
 */
int process_format(const char *format, va_list args)
{
	int count, i;

	count = 0
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			count += handle_conversion(format[i + 1], args);
			i++;
		}
	}
	return (count);
}

/**
 * handle_conversion - Handle a specific conversion specifier
 * @specifier: The conversion specifier
 * @args: Variable arguments list
 * Return: Number of characters printed (excluding the null byte)
 */
int handle_conversion(char specifier, va_list args)
{
	switch (format[i + 1])
	{
		case 'c':
			handle_char(args);
			return (1);
		case 's':
			return (handle_string(args));
		case '%':
			_putchar('%');
			return (1);
		case 'd':
			handle_decimal(args);
		case 'i':
			handle_integer(args);
		default:
			_putchar('%');
			_putchar(specifier);
			return (2);
	}
}

