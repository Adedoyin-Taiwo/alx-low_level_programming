#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_rev - print reverse
* return: 0
* @s: the string
*/

void print_rev(char *s)
{
	int mov = strlen(s) - 1;

	while (mov >= 0)
	{
		_putchar(s[mov]);
		--mov;
	}
	_putchar('\n');
}
