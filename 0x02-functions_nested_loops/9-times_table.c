#include "main.h"

/**
* times_table - prints 9 times table
* Return: 0
*/

void times_table(void)
{
	int i = 0;
	int j = 0;
	int ddig;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			ddig = i * j;
			_putchar(ddig);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
