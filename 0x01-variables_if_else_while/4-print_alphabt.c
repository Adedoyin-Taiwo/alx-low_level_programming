#include <stdio.h>

/**
* main - prints lowercase alphabets without q and e
* Return: 0.
*/
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' | letter == 'q')
		{
			putchar(' ');
			letter++;
		}
		else
			putchar(letter);
			letter++;
	}
	return 0;
}
