#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* array_range - It creates an array of integers
* @min: minimum number
* @max: maximum number
* Return: pointer to the array
*/

int *array_range(int min, int max)
{
	int *m;
	int mal_len, i;

	mal_len = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	m = malloc(mal_len * sizeof(int));
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < mal_len; i++)
	{
		*(m + i) = min;
		min += 1;
	}
	return (m);
}
