#include <stdio.h>

/**
* main - prints digits in ascending order
* Return: 0
*/
int main(void)
{
	int d = 48;
	int dcomaspace [] = {44, 32};
	int i;

	while (d <= 56)
	{
		putchar(d);
		for (i = 0; i < sizeof(dcomaspace) / sizeof(dcomaspace[0]); i++)
		{
			putchar(dcomaspace[i]);
		}
		d++;
	}
	putchar(57);
	putchar('\n');
	return (0);
}
