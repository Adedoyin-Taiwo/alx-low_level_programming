#include "main.h"

/**
* _memset - fills the first n bytes of the memory with constant
* @s: string
* @b: constant
* @n: number of bytes
* Return: a pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		*(s + count) = b;
	}
	return (s);
}
