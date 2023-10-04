#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to s1
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *m, *n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	m = malloc(strlen(s1));
	n = malloc(strlen(s2) + 1);
	if (m == NULL || n == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(m + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(m + i) = *(s2 + j);
		i++;
		j++;
	}
	*(m + i) = '\0';
	free(n);
	return (m);
}
