#include "main.h"

/**
* print_last_digit - prints last digit
* Return: 0
* @n: inputted integer
*/

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (lastd < 0)
	{
		lastd *= -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
