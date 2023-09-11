#include <stdio.h>

/**
* main - The function prints two two digits
* Return: 0
*/
int main(void)
{
	int digi1, digi2;
	int dcomaspace[] = {44, 32};
	unsigned long int z;

	for (digi1 = 0; digi1 <= 99; digi1++)
	{
		for (digi2 = digi1 + 1; digi2 <= 99; digi2++)
		{
			putchar((digi1 / 10) + '0');
			putchar((digi1 % 10) + '0');
			putchar(' ');
			putchar((digi2 / 10) + '0');
			putchar((digi2 % 10) + '0');
			if (digi1 < 98 || digi2 < 99)
			{
			for (z = 0; z < sizeof(dcomaspace) / sizeof(dcomaspace[0]); z++)
			{
				putchar(dcomaspace[z]);
			}
			}
		}
	}
	putchar('\n');
	return (0);
}


