#include "main.h"

/**
* string_toupper - converts string to upper
* @str: the string
* Return: 0
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);
}
