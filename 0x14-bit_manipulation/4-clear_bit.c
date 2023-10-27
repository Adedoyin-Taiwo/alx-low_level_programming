#include "main.h"
/**
* clear_bit - clears bit at an index
* @n: the number
* @index: the position
* Return: 1 or 0
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}

