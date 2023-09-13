#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints natural number
* Return: 0
* @n: natural number
*/

void print_to_98(int n)
{
	if ((n - 98) > 0)
	{
		do {
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n -= 1;
		} while (n >= 98);
	}
	else if ((n - 98) <= 0)
	{
		do {
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n += 1;
		} while (n <= 98);
	}
	printf("\n");
}
