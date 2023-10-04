#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_grid - free the grid function
* @grid: the grid function
* @height: the height of the grid function
* Return: 0
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	return (NULL);
}
