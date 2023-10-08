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
	unsigned int i, j;
	char *m;

	m = malloc(strlen(s1) + strlen(s2) + 1);
	if (m == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(m + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (j < n && *(s2 + j) != '\0')
	{
		*(m + i) = *(s2 + j);
		i++;
		j++;
	}
	*(m + i) = '\0';
	return (m);
}
