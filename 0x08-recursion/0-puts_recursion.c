#include "main.h"

/**
* _puts_recursion - prints a string, followed by a new line
* @s: the string
* Return: 0
*/

void _puts_recursion(char *s)
{
	if (*s  == '\0')
	{
		return (0);
	}
	_putchar(*s);
	_puts_recursion(*(s + 1));

}
