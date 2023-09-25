#include "main.h"

/**
* _strspn - length of a prefix substring
* @s: string
* @accept: accepted length
* Return: number of same character
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, get = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				get += 1;
				break;
			}
		}
		if (*(accept + j) == '\0')
			return (get);
	}
	return (get)
}
