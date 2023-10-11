#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* new_dog - creates a new dog
* @name: name
* @age: age
* @owner: owner
* Return: 0
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *abname, *abowner; 

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	abname = malloc(sizeof(char) * (strlen(name) + 1));
	if (abname == NULL)
	{
		return (NULL);
		free (newDog);
	}
	abowner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (abowner == NULL)
	{
		return (NULL);
		free (abname);
		free (newDog);
	}

	newDog->name = strcpy(abname, name);
	newDog->age = age;
	newDog->owner = strcpy(abowner, owner);
	return (newDog);
}
