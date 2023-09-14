#include "main.h"
#include <stdio.h>

/**
* print_diagonal - print straight line
* Return: 0
* @n: number of times n should be printed
*/


void print_diagonal(int n)
{
	int diag;
	int j;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
	for (j = 0; j < n; j++)
	{
		for (diag = 0; diag < j; diag++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
