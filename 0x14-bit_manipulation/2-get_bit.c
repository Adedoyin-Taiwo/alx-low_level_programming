#include "main.h"

/**
* get_bit - returns the value of bit at an index
* @index: the position
* @n: the number
* Return: 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bitit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bitit = (n >> index) & 1;
	return (bitit);
}
