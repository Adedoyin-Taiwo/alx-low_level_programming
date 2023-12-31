#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_dog - frees dog
* @d: the structure to be freed
* Return: nothing
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
