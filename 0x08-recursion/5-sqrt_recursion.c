#include "main.h"

/**
* _power_handler -  returns the resultant of the exponentiation
* @n: the integer
* @x: the power
* Return: result of exponentiation
*/

int _power_handler(int n, int x)
{
	if (n < 0)
	{
		return (-1);
	}
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (_power_handler(n, x + 1));
}

/**
* _sqrt_recursion - finds square root
* @n: the number
* Return: result
*/

int _sqrt_recursion(int n)
{
	return (_power_handler(n, 0));
}
