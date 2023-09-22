#include "main.h"

/**
* reverse_array - reverse array
* @a: the array
* @n: number of elements
* Return: 0
*/

void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;
	int holder;

	while (first < last)
	{
		holder = a[first];
		a[first] = a[last];
		a[last] = holder;
		first++;
		last--;
	}
}
