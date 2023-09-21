#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* rev_string - print string in reverse
* return: 0
* @s: the string
*/

void rev_string(char *s)
{
	int mov = strlen(s) - 1;

	while (mov >= 0)
	{
		_putchar(s[mov]);
		--mov;
	}
	_putchar('\n');
}
