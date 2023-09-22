#include "main.h"

/**
* leet - the leet converter
* @str: the string
* Return: char
*/

char *leet(char *str)
{
	char arr_char[] = "oOlLeEaAtT";
	char arr_num[] = "0011334477";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; arr_char[j] != '\0'; j++)
		{
			if (str[i]  == arr_char[j])
			{
				str[i] = arr_num[j];
				break;
			}
		}
	}
	return (str);
}
