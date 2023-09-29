#include "main.h"

/**
* recursive_prime - tests prime
* @n: the number
* @divisor: the tested case
* Return: 1 (it is prime) ) (No)
*/

int recursive_prime(int n, int divisor)
{
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
	return (recursive_prime(n, divisor + 1));
}
/**
* is_prime_number - tells prime number
* @n: the number
* Return: 1 (it is prime) ) (No)
*/

int is_prime_number(int n)
{
	return (recursive_prime(n, 1));
}
