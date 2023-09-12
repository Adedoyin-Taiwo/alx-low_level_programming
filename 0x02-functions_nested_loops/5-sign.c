#include "main.h"

/**
* print_sign -  prints the sign of a number
* Return: - (n<0), + (n>0), 0 (n = 0)
*@n: this is the inputted integer
*/

int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else if (n > 0)
	{
		return (1);
		_purchar('+');
	}
	else
	{
		return (0);
		_putchar('0');
	}
	return (0);
}
