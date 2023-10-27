#include "main.h"

/**
* print_binary - converts numbers to binary
* @n: the number
* Return: nothing
*/

void print_binary(unsigned long int n)
{
	unsigned long int print = 0, bit;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit || print)
		{
			printf("%ld", bit);
			print = 1;
		}
	}
}
