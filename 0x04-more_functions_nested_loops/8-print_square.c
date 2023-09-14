#include "main.h"
#include <stdio.h>

/**
 * print_square - Print square line dependent on the integer n.
 * @n : The number of lines using '#' characters to use per row and column
 * Return: Void.
 */
void print_square(int n)
{
	int sq;
	int sr;

	for (sr = 0; sr < n; sr++)
	{
		for (sq = 0; sq < n; sq++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
