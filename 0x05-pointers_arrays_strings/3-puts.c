#include "main.h"

/**
* _puts - prints string followed by newline
* Return: 0
* @str: string
*/

void _puts(char *str)
{
	int mov = 0;

	while (str[mov] != '\0')
	{
		_putchar(str[mov]);
		mov++;
	}
}
