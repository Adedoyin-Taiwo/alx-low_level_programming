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
	char *n, *o;

	n = malloc(sizeof(char) * (strlen(name) + 1));
	o = malloc(sizeof(char) * (strlen(owner) + 1));
	if (n == NULL)
		exit;
	if (o == NULL)
		exit;
	strcpy(n, name);
	strcpy(o, owner);

	(*d).name = n;
	(*d).age = age;
	(*d).owner = o;
}
