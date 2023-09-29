#include "main.h"
#include <string.h>

/**
* palindrome_test - tests palindrome
* @s: the string
* @a: start character
* @b: end character
* Return: 0
*/

int palindrome_test(char *s, int a, int b)
{
	if (a >= b)
	{
		return (1);
	}
	if (s[a] == s[b])
	{
		return (palindrome_test(s, a + 1, b - 1));
	}
	else
	{
		return (0);
	}
}

/**
* is_palindrome - retrns if a string is palindrome or not
* @s: the string
* Return: 0(not a palindrome), 1 (palindrome)
*/

int is_palindrome(char *s)
{
	return (palindrome_test(s, 0, strlen(s) - 1));
}
