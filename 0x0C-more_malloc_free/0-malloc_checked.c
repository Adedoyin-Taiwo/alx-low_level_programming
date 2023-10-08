#include "main.h"

/**
* malloc_checked - function allocates memory using malloc
* @b:he size of the memorry
* Return: 0
*/

void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
