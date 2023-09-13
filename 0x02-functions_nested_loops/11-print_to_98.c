#include <stdio.h>

int main (int n)
{
	int d;

	n = -100 ;
	if ((n - 98) > 0)
	{
		do
		{
			printf("%d",n );
			if (n != 98)
			{
				printf(", ");
			}
			n -= 1;
		}
		while (n >= 98);
	}
	else if ((n - 98) <= 0)
	{
		do		
		{
			printf("%d",n );
			if (n != 98)
			{
				printf(", ");
			}
			n += 1;
		}
		while (n <= 98);
	}
	printf("\n");
}
