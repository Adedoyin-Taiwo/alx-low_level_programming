#include "main.h"

/**
* _strncpy - copy string
* @dest: destination
* @src: source
* @n: integer
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < strlen(dest))
	{

		dest[i] = src[i];
		if (i < n)
		{
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
