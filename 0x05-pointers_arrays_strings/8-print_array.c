#include "main.h"

/**
* print_array - prints n elements of an array of integers
* @a: array
* @n: number of elements to be printed
* Return: 0
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0;i < n; i++);
	{
		printf("%d", a[i]);
		if (i < strlen(a) - 1)
		{
		printf(", ");
		}
	}
}
