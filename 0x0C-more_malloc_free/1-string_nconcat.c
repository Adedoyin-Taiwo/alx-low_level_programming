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
	char *m;
	unsigned long int mal_len, i, j, dig;

	dig = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (dig >= strlen(s2))
		dig = strlen(s2);

	mal_len = strlen(s1) + dig + 1;
	m = malloc(sizeof(*m) * mal_len);
	if (m == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++) /* concat */
		*(m + i) = *(s1 + i);
	for (j = 0; j < dig; j++)
		*(m + i + j) = *(s2 + j);
	*(m + i + j) = '\0';

	return (m);
}
