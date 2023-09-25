#include "main.h"

/**
* _memcpy - copies memory
* @dest: destination
* @src: source
* @n: integer
* Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n && *(src + count) != '\0'; count++)
	{
		*(dest + count) = *(src + count);
	}
	return (dest);
}

