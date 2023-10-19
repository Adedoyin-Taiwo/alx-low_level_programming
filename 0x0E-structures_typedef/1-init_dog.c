#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _dlen - string length
* @x: pointer to the string x
* Return: lenght
*/

int _dlen(char *x)
{
	int len = 0;

	while (*x != '\0')
	{
		len++;
		x++;
	}
	return (len);
}

/**
* copystr - copy the string
* @source: where string is coming from
* @dest: the new memory to be filled
* Return: Nothing
*/

void copystr(char *dest, char *source)
{
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

/**
* init_dog - initialise type dog
* @d: d
* @name: name
* @age: age
* @owner: owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = malloc(sizeof(_dlen(name) + 1));
	if (d->name == NULL)
		return;
	d->owner = malloc(sizeof(_dlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		return;
	}
	copystr(d->name, name);
	copystr(d->owner, owner);

	d->age = age;
}
