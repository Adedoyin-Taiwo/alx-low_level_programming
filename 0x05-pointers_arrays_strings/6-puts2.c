#include "main.h"

/**
* puts2 - prints every other character
* Return: 0
* @str: the string
*/

void puts2(char *str)
{
	int mov = 0;

	while (str[mov] != '\0')
	{
		_putchar(str[mov]);
		mov += 2;
	}
	_putchar('\n'0;
}
