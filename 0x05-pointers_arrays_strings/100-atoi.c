#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _atoi - convert a string to an integer
* @s: the string
* Return: 0
*/

int _atoi(char *s)
{
	int i = 0;
	signed int result = 0;
	int sign = 1;

	while ((*(s + i) < '0' || *(s + i) > '9') && *(s + i) != '\0')
	{
		if (*(s + i) == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (*(s + i) >= '0' && *(s + i) <= '9' && *(s + i) != '\0')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}
