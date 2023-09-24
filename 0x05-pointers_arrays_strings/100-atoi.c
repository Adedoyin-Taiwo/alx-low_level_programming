#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _atoi - convert a string to an integer
* @s: the string
* Return: 0
*/

int main(void)
{
	char *s = "878";
	int i;
	int result = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		
		if ((*(s + (i + 1)) >= '0' && *(s + (i+1)) <= '9') && *(s + (i + 1)) != '\0')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
	}
	return (0);
}
