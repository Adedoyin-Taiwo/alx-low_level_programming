#include <stdio.h>

int main(void)
{
	int ddig;
	int i,j;

	i = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			ddig = i * j;
			if (ddig > 10)
			{
				putchar((ddig/10)+ '0');
				putchar((ddig%10)+ '0');
				if (i < 8 || j < 9)
				{
				putchar(',');
				putchar(' ');
				}
				j++;
			}
			else
			{
				putchar(ddig/10);
				putchar((ddig%10) + '0');
				if (i < 8 || j < 9)
				{
				putchar(',');
				putchar(' ');
				}
				j++;
			}
		}
		putchar('\n');
		i++;
	}
}
