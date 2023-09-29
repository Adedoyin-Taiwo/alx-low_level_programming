#include "main.h"

/**
* _sqrt_recursion - finds square root
* @n: the number
* Return: result
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		double x0 = (double) n;
		double x1 = (x0 + (double) n / x0) / 2.0;
		return _sqrt_recursion(x1);
	}
}

