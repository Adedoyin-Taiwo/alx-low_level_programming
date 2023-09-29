#include "main.h"
#include <iostream>

/**
* is_prime_number - tells prime number
* @n: the number
* Return: 1 (it is prime) ) (No)
*/

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
	{
		return (false);
	}
	if (divisor * divisor > n)
	{
		return (true);
	}
	if (n % divisor == 0)
	{
		return (false);
	}
	return (isPrimeRecursive(n, divisor + 1));
}
