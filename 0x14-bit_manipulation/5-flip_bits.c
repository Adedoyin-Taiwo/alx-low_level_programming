#include "main.h"

/**
* count_set_bits - counts number of 1s
* @n: the number
* Return: count
*/

int count_set_bits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

/**
* flip_bits - calculates number of flips
* @n: first number
* @m: seond number
* Return: the number of flips
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xorit;

	xorit = n ^ m;
	return (count_set_bits(xorit));
}

