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

	va_start(args, format);
	while (format && format[i] != '\0')
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
						const char *ret;

				ret = va_arg(args, const char *);
				if (ret == NULL)
				{
					ret = "(nil)";
				}
				printf("%s", ret);	}
				break;
			default:
				break;
		}
		if ((i < lh - 1) && (format[i] == 'c' || format[i] == 'i'
					|| format[i] == 'f' || format[i] == 's'))
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
