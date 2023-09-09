#include <stdio.h>

/**
* main - The function prints two two digits
* Return: 0
*/
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int ddig [4] = {0};
	int c;
	int dcomaspace[] = {44, 32};
	int z;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = j; l <= 57; l++)
				{
					ddig[0] = i;
					ddig[1] = j;
					ddig[2] = k;
					ddig[3] = l;

					for (c = 0; c < 2; c++)
					{
						putchar(ddig[c]);
					}
					putchar(' ');
					for (c = 2; c < 4; c++)
					{
						putchar(ddig[c]);
					}
					for (z = 0; z < 2; z++)
					{
						putchar(dcomaspace[z]);
					}
				}
			}
		}
	}
	return (0);
}


