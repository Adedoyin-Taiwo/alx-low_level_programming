#include "main.h"

/**
* print_most_numbers - print digits without 2 and 4
* Return: 0
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if ((i == 50) || (i == 52))
		{
		}
		else
		{
			_puchar(i);
		}
	}
	_putchar('\n');
}
