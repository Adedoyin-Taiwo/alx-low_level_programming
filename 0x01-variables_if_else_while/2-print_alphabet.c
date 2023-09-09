#include <stdio.h>

/**
 * main - the fuction prints alphabets in lowercase
 * Return: 0, for success
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
