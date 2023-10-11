#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - prints dog
* @d: the dog
* Return: 0
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)");
	}
	printf("Age: %f\n", (d->age) ? d->age : 0);
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)");
	}
	}
}
