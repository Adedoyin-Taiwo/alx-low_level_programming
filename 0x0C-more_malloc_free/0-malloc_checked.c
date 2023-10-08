#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
* malloc_checked - function allocates memory using malloc
* @b:he size of the memorry
* Return: 0
*/

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
