#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - print the strings then a new line
* @separator: delimiter
* @n: number of strings
* @Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ade;
	const char *str;

	va_start(ade, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ade, const char *);
		printf("%s", str);
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ade);
}
