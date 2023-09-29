#include "main.h"

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
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_number(n, divisor + 1));
}
