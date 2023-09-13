#include <stdio.h>

int main(int n)
{
	int d;

	n = 30;
	if ((n - 98) > 0)
	{
		do
		{
			if (n >= 100)
			{
				d = n * 1;
				putchar((d / 100) + '0');
				d %= 100;
				putchar((d / 10) + '0');
				putchar((d % 10) + '0');
			}
			else if (n < 100)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n -= 1;
		}
		while (n >= 98);
	}
	else if ((n - 98) < 0)
	{
		do
		{
		if (n < 0)
		{
			d = n * -1;
			putchar('-');
			putchar((d/10) + '0');
			putchar((d%10) + '0');
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		else if (n >= 0)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n += 1;
		}
		while (n <= 98);
	}
	putchar('\n');
}
