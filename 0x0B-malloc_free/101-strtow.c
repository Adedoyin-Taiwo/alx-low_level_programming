#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* strtow - splits a string into words
* @str: the string
* Return: pointer to the array
*/
char **strtow(char *str)
{
	int i, j, k;
	char **strtow;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	strtow = (char **)malloc(sizeof(char *) * (strlen(str) + 1));
	if (strtow == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0' && i < strlen(str))
	{
		strtow[i] = (char *)malloc(strlen(str) + 1);
		if (strtow[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(strtow[j]);
			}
			free(strtow);
			return (NULL);
		}
		if (*(str + i) == ' ' && (i == 0 || *(str + (i - 1)) != ' '))
		{
			k = 0;
			while (*(str + i) != ' ' && *(str + i) != '\0')
			{
				strtow[i][k] = *(str + i);
				i++;
				k++;
			}
			strtow[i][k] = '\0';
		}
		else
		{
			i++;
		}
	}
	strtow[i] = NULL;
	return (strtow);
}
