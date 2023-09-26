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
		lead_sum += *(a + (size * i + 1);
		opp_sum += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", lead_sum);
	printf("%d\n ", opp_sum);
}
