#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: string
* @c: character
* Return: 0
*/

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		if (*(s + count) == c)
		{
			return (s + count);
		}
	}
	return NULL;
}
