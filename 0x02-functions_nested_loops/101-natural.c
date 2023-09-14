#include <stdio.h>

/**
* main - prints the addition of multiples
* Return: 0
*/

int main(void)
{
	long int total = 0;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			total += n;
		}
	}
	printf("%ld\n", total);
	return (0);
}
