#include <stdio.h>

/**
* print_times_table - print times table
* @n: integer
* Return: 0
*/

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
	int ddig, i, j;

	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			ddig = i * j;
			if (ddig >= 100)
			{
				printf(", %d", ddig);
			}
			else if ((ddig >= 10) && (ddig < 100) )
			{
				printf(",  %d", ddig);
			}
			else
			{
				if (j != 0)
				{
				printf(",   ");
				}
				printf("%d", ddig);
			}
			j++;
		}
		printf("\n");
		i++;
	}
	}
}
