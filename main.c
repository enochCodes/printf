#include "main.h"
/**
 * _printf - prinf
 */
int main()
{
	int len;
	int len2;

	_printf("Hello %s\n",  "Str");
	_printf("Hello %s\n",  "Str");
	_printf("Hello %s\n",  NULL);
	_printf("Hello %s\n",  NULL);
	len = printf("Hello %p\n",  NULL);
	len2 = _printf("Hello %p\n",  NULL);
	printf("%d %d\n", len, len2);
	return (0);
}
