#include <stdio.h>

/**
* main - prints both lowercase and uppercase
* Return: 0
*/
int main(void)
{
	char letter, letterA;

	letter = 'a';
	letterA = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letterA <= 'Z')
	{
		putchar(letterA);
		letterA++;
	}
	putchar('\n');
	return (0);
}
