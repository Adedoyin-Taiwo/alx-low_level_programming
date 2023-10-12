#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - sum it all
* @n: first argument
* Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list(args);
	int i, sum, x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
