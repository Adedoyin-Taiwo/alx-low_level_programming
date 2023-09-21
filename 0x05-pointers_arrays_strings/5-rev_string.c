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
	int mov, j, len;
	char rev[] = {0};

	len = strlen(s);
	j = 0;
	for (mov = len - 1; mov >= 0; mov--)
	{
		rev[j] = s[mov];
		j++;
	}
	rev[j] = '\0';
}
