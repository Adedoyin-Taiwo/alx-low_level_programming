#include "main.h"
#include <string.h>

/**
* _strncat - concatenate
* @dest: destination
* @src: source
* @n: integer
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		if (j < n)
		{
		i++;
		j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
