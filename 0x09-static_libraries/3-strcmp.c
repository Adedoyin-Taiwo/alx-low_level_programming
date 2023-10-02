#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcmp - compare function
* @s1: first string
* @s2: second string
* Return: 0(s1=s2),1 (s1>s2), -1(s1<s2)
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int ded_str = 0;

	while (s1[i] != '\0' && s1[i]  == s2[i])
	{
		i++;
	}
		if (s1[i] !=  s2[i])
		{
			ded_str = s1[i] - s2[i];
		}
	return (ded_str);
}
