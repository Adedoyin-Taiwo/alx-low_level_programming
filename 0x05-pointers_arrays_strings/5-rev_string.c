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
	int len = strlen(s);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
