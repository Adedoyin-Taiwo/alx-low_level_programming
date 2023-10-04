#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - creates an array of characters
* @size: size of the array
* @c: character
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *d;

	if (size == 0)
	{
		return (NULL);
	}
	d = malloc(sizeof(char) * size);
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		d[i] = c;
	}
	return (d);
}

