#include "main.h"

/**
* _abs - computes the absolute value of an integer.
* Return: 0
* @n: integer
*/

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	else if (n > 0)
	{
		n *= 1;
	}
	else
	{
		n = n;
	}
	return (0);
}
