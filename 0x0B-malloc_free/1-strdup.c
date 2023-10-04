#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - Returns a pointer to a new string
* which is a duplicate of the string
* @str: the string
* Return: Pointer
*/

char *_strdup(char *str)
{
	char *d;
	unsigned long int i;

	if (str == NULL)
	{
		return (NULL);
	}
	d = malloc(strlen(str) + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= strlen(str); i++)
	{
		d[i] = str[i];
	}
	return (d);
	free(d);
}
