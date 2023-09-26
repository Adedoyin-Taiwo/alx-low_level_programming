#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints diagonal sums
* @a: array
* @size: size of the array
* Returns: 0
*/

void print_diagsums(int *a, int size)
{
	int i;
	int lead_sum = 0;
	int opp_sum = 0;

	for (i = 0; i < size; i++)
	{
		lead_sum += a[i * size + i];
		opp_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d \n", lead_sum, opp_sum);
}
