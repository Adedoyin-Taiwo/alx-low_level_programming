#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* puts_half - prints half
* Return: 0
* @str: the string
*/

void puts_half(char *str)
{
	int len_str = strlen(str);
	int mov = 0;
	int half_s = len_str / 2;
	int half_s_n = (len_str + 1) / 2;

	while (str[mov] != '\0')
	{
		if (len_str % 2 == 0)
		{
			if (mov > half_s)
			{
				_putchar(str[mov]);
			}
		}
		else if (len_str % 2 != 0)
		{
			if (mov > half_s_n)
			{
				_putchar(str[mov]);
			}
		}
	mov++;
	}
}
