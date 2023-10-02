#include "main.h"

/**
* _strlen - returns length of the string
* Return: 0
* @s: string
*/

int _strlen(char *s)
{
	int len_s = 0;

	while (s[len_s] != '\0')
	{
		len_s++;
	}

	return (len_s);
}
