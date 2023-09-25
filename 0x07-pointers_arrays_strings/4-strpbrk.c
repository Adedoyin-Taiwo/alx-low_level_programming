#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* _strpbrk - searches a string for character
* @s: string
* @accept: the searched
* Return: NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(s + j) == *(accept + i))
			{
				return (s + j);
			}
		}
	}
	return (NULL);
}
