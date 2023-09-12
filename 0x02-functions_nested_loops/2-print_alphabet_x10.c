#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
* return: Null
*/

void print_alphabet_x10(void)
{
	int ch;
	
	int i = 0;
	while (i < 10)
	{
		for (ch = 'a'; ch < 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
