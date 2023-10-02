#include <stdio.h>
#include <stdlib.h>

/**
* main - Minimum number of coins to make change for an amount of money.
* @argc: number of command line arguments.
* @argv: Array of command line arguments.
* Return: 0
*/

int main(int argc, char *argv[])
{
	int num_cents, num_coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	num_cents = atoi(argv[1]);

	while (num_cents > 0)
	{
		if (num_cents >= 25)
		{
			num_cents -= 25;
		}
		else if (num_cents >= 10)
		{
			num_cents -= 10;
		}
		else if (num_cents >= 5)
		{
			num_cents -= 5;
		}
		else if (num_cents >= 2)
		{
			num_cents -= 2;
		}
		else if (num_cents >= 1)
		{
			cents -= 1;
		}
		num_coins++;
		num_cents--;
	}
	printf("%d\n", num_coins);
	return (0);
}
