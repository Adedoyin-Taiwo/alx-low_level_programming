#include <stdio.h>

/**
* main - print hex values
* Return: 0
*/
int main(void)
{
	int d;
	char c;

	d = 48;
	while (d <= 57)
	{
		putchar(d);
		d++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

