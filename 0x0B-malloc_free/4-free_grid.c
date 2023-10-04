#include "main.h"
#include <stdio.h>

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
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	return (NULL);
}
