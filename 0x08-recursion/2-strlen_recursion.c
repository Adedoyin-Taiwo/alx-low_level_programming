#include "main.h"

/**
* _strlen_recursion - prints string length
* @s: string
* Return: 0
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursions(s + 1));
}
