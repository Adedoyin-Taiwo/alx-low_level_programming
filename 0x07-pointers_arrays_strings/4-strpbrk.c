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

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(accept + i) == *(s + j))
			{
				return (s + j);
				exit (EXIT_SUCCESS);
			}
		}
	}
	return (NULL);
}
