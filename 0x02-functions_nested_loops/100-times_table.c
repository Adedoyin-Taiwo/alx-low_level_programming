#include "main.h"
#include <stdio.h>

/**
* print_times_table - print times table
* @n: integer
* Return: 0
*/

void print_times_table(int n)
{
	int ddig;
	int i, j;

	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			ddig = i * j;
			if (ddig >= 10)
			{
				printf(", ");
				printf("%d", ddig);
			}
			else
			{
				if (j != 0)
				{
				printf(",  ");
				}
				printf("%d", ddig);
			}
			j++;
		}
		printf("\n");
		i++;
	}
}
