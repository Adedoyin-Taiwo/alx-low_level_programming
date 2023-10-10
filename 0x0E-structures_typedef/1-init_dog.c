#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* init_dog - initialise type dog
* @d: d
* @name: name
* @age: age
* @owner: owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
