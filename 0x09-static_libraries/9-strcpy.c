#include "main.h"
#include <string.h>

/**
* _strcpy - copies the string pointed
* @dest: buffer
* @src: ointed to
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	unsigned long int i;

	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
