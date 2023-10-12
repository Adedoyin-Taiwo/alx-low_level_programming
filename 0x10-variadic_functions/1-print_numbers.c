#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - prints numbers then a new line
* @separator: the delimiter
* @n: the count of numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list ade;
	va_start(ade, n);
	
	for (i = 0; i < n; i++)
	{
		x = va_arg(ade, int);
		printf("%d", x);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(ade);
}

