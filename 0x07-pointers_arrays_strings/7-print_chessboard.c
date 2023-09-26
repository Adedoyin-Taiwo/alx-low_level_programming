#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_chessboard - prints the chessboard
* @a: number of rows
* Return: 0
*/

void print_chessboard(char (*a)[8])
{
	size_t i, j;

	for (i = 0; i < 8 ; i++)
	{
		for (j = 0; j < 8 ; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
