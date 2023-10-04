#include "main.h"
#include <stdlib.h>
#include <stdio.h>


void mal(char * c)
{
	int i;

	c = malloc(sizeof(char)*size);
	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		c[i] == c;
		return (mal (c + 1));
	}
	if (c == Null)
	{
		return (NULL);
	}
}
/**
* create_array - creates an array of characters
* @size: size of the array
* @c: character
*/

char *create_array(unsigned int size, char c)
{
	return (mal(char * c);
}
