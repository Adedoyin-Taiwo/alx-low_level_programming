#include <stdio.h>

/**
* main - prints highest prime factor of 612852475143
* Return: that the program is success
*/

int main(void)
{
	long int  large_num = 612852475143;
	long int larg_prime;

	for (larg_prime = 2; larg_prime <= large_num; larg_prime++)
	{
		if (large_num % larg_prime == 0)
		{
			large_num = large_num / larg_prime;
		}
	}
	printf("%ld\n", larg_prime);
	return (0);
}
