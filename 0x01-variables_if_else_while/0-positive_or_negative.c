#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this function determines if a number supplied is negative or positive
 * Return: 0, if the function works effectively
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{	printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
