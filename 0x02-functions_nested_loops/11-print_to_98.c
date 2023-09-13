#include "main.h"

void print_to_98(int n)
{
	int d;

	if ((n - 98) > 0)
	{
		do
		{
			if (n >= 100)
			{
				d = n * 1;
				_putchar((d / 100) + '0');
				d %= 100;
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
			else if (n < 100)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n -= 1;
		}
		while (n >= 98);
	}
	else if ((n - 98) <= 0)
	{
		do
		{
		if (n < 0 && n >= -100)
		{
			d = n * -1;
			_putchar('-');
			_putchar((d/10) + '0');
			_putchar((d%10) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		else if (n < -99)
		{
			d = n * -1;
			_putchar('-');
			_putchar((d / 100) + '0');
			d %= 100;
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		else if (n >= 0)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		n += 1;
		}
		while (n <= 98);
	}
	_putchar('\n');
}
