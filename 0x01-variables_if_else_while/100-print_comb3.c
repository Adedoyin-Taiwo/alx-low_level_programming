#include <stdio.h>

/**
* main - print combination of two digits
* Return: 0.
*/
int main(void)
{
	int i;
	int j;
	unsigned long int c;
	int dcomaspace [] = {44, 32};
	int ddig [2] = {0};
	int isFirstPair = 1;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			ddig[0] = i;
			ddig[1] = j;
			for (c  = 0; c < sizeof(ddig) / sizeof(ddig[0]); c++)
			{
				putchar(ddig[c]);
			}
			if (j < 57 || i < 56)
			{
				for (c = 0; c < sizeof(dcomaspace) / sizeof(dcomaspace[0]); c++)
				{
					putchar(dcomaspace[c]);
				}
			}
		}
	}
	return (0);
}
