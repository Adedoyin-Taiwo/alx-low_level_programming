#include "main.h"

/**
* _strstr -  locates a substring
* @needle: the substring
* @haystack: the string
* Return: a pointer
*/

char *_strstr(char *haystack, char *needle)
{
	char *stack;
	char *dle;

	while (*haystack != '\0')
	{
		stack = haystack;
		dle = needle;
		while (*haystack != '\0' && *dle != '\0' && *haystack == *dle)
		{
			haystack++;
			dle++;
		}
		if (!*dle)
			return (stack);
		haystack = stack + 1;
	}
	return (0);
}
