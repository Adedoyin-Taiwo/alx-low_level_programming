#include "main.h"
#include <stdio.h>

/**
* times_table - prints 9 times table
* Return: 0
*/

void times_table(void)
{
	int i, j, ddig;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ddig = i * j;
			if (j == 0)
			{
				_putchar(ddig + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (ddig < 10)
					_putchar(' ');
				_putchar(ddig + '0');
			}
			_putchar('\n');
		}
	}
}
