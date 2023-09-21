#include "main.h"

/**
* _strcat - concatenate strings
* @dest: destination string
* @src: source string
* Return: pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	int len1 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	for (i = len1; dest[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
