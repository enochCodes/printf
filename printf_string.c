#include "main.h"
/**
 * handle_string - handles the 's' conversion specifier in _pritnf
 * @args: va_list containing the arguments
 * @count: pointer to the count of characoters printed
 */
void handle_string(va_list args, int *count)
{
	int j;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
		(*count)++;
	}
}
