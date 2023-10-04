#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* alloc_grid - allocate grid
* @width: the width of the grid
* @height: the height of the grid
* Return: 0
*/

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int i;
	int j;
	int **grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
