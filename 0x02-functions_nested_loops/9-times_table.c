#include <stdio.h>
#include "main.h"

/**
* times_table - prints times table
* Return: 0
*/
void times_table(void)
{
	int ddig;
	int i, j;

	i = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			ddig = i * j;
			if (ddig >= 10)
			{
				_putchar((ddig / 10) + '0');
				_putchar((ddig % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
			else
			{
				_putchar(ddig / 10);
				_putchar((ddig % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
		}
		i++;
	}
}
