#include "main.h"
#include <stdio.h>

/**
* print_line - print straight line
* Return: 0
* @n: number of times n should be printed
*/

void print_line(int n)
{
	int line;

	line = 0;
	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (line < n)
		{
			_putchar('_');
			line++;
		}
	_putchar('\n');
	}
}
