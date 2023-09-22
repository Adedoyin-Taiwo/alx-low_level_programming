#include <main.h>

/**
* reverse_array - reverse array
* @a: the array
* @n: number of elements
* Return: 0
*/

void reverse_array(int *a, int n)
{
	int i = n - 1;
	char digchar;

	while (i >= 0)
	{
		digchar = '0' + a[i];
		_putchar(digchar);
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	i--;
	}
	_putchar('\n');
}

