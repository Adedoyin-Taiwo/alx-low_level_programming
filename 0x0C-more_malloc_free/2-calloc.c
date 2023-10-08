#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocates memory to an array
* @nmemb: the number of array members
* @size: size of the data type
* Return: 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	m = malloc(nmemb * size);
	if (m == NULL)
	{
		return (NULL);
	}
	memset(m, 0, nmemb * size);
	return (m);
}
