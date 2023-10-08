#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes
* Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *m;

	m = malloc(strlen(s1) + strlen(s2) + 1);
	if (m == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
	{
		*(m + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		*(m + i) = *(s2 + j);
		if (j < n)
		{
		i++;
		}
		j++;
	}
	*(m + i) = '\0';
	return (m);
}
