#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>

/**
* print_all - print all forms
* @format: format specifier
* Return: 0
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, length = strlen(format);

	va_start(args, format);
	while (i < length)
	{
		switch (*(format + i))
		{
			case 'c':	{
					 char ret;

				printf("%c", ret = va_arg(args, int));	}
				break;
			case 'i':	{
				int ret;

				printf("%d", ret = va_arg(args, int));	}
				break;
			case 'f':	{
				double ret;

				printf("%f", ret = va_arg(args, double));	}
				break;
			case 's':	{
				const char *ret;

				printf("%s", ret = va_arg(args, const char *));	}
				break;
			default:
				break;
		}
		printf(", ");
		i++;
	}
	printf("\n");
}
