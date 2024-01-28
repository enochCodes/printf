#include "main.h"

/*
 * the _printf function handles the following format specifiers:
 * %c - print single character
 * %s - print string
 * %% - print the percent sign
 */

int _printf(const char *format, ...)
{
    int count = 0;

    va_list args;
    va_start(args, format);
    int i;

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            putchar(format[i]);
            count++;
        }
        else
        {
            if (format[i + 1] == 'c')
            {
                char ch = va_arg(args, int);
                putchar(ch);
                count++;
                i++;
            }
            else if (format[i + 1] == 's')
            {
                char *str = va_arg(args, char *);
                int j;
                for (j = 0; str[j] != '\0'; j++)
                {
                    putchar(str[j]);
                    count++;
                }
                i++;
            }
            else if (format[i + 1] == '%')
            {
                putchar('%');
                count++;
                i++;
            }
            else
            {
                putchar('%');
                putchar(format[i + 1]);
                count += 2;
                i++;
            }
        }
    }

    va_end(args);
    return count;
}
