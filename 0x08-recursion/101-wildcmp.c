#include "main.h"

/**
* string_test - test the strings
* @s1: first string
* @s2: second string
* Return: 0
*/

int string_test(char *s1, char *s2)
{
	if (*s1 == '\0' &&  *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (string_test(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}

/**
* wildcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: 0
*/

int wildcmp(char *s1, char *s2)
{
	return (string_test(s1, s2));
}
