#include <stdio.h>

/**
* main - print combination of two digits
* Return: 0.
*/
int main(void)
{
	int i;
	int j;
	int k;
	unsigned long int c;
	int dcomaspace [] = {44, 32};
	int ddig [3] = {0};

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
			ddig[0] = i;
			ddig[1] = j;
			ddig[2] = k;
			for (c  = 0; c < sizeof(ddig) / sizeof(ddig[0]); c++)
			{
				putchar(ddig[c]);
			}
			if (k < 57 || j < 56 || i < 55)
			{
				for (c = 0; c < sizeof(dcomaspace) / sizeof(dcomaspace[0]); c++)
				{
					putchar(dcomaspace[c]);
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
