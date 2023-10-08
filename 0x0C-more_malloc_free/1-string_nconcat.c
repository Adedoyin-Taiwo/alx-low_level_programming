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
	unsigned int mal_len, i = 0, j = 0;
	char *m;

	mal_len = strlen(s1) + strlen(s2) + 1;
	m = malloc(sizeof(*m) * mal_len);
	if (m == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	while (*(s1 + i) != '\0')
	{
		*(m + i) = *(s1 + i);
		i++;
	}
	while (j < n && *(s2 + j) != '\0')
	{
		*(m + i) = *(s2 + j);
		i++;
		j++;
	}
	*(m + i) = '\0';
	return (m);
}
