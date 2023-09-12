#include "main.h"

/**
* print_alphabet - this function returns the lower case of letters
* Return: does not return any value
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
