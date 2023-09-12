#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
* return: Null
*/

void print_alphabet_x10(void)
{
	int ch;
	int i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
