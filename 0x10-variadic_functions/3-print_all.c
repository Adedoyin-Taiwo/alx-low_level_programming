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
	int i = 0, lh = strlen(format);
	char *hold_str;

	va_start(args, format);
	while (format && *(format + i) != '\0')
	{
		switch (*(format + i))
		{
			case 'c':	{
						printf("%c", va_arg(args, int));	}
				break;
			case 'i':	{
						printf("%d", va_arg(args, int));	}
				break;
			case 'f':	{
						printf("%f", va_arg(args, double));	}
				break;
			case 's':	{
				hold_str = va_arg(args, char *);
				if (!hold_str)
				{
					hold_str = "(nil)";
				}
				printf("%s", hold_str);	}
				break;
			default:
				i++;
				continue;
		}
		if (i < lh - 1)
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
