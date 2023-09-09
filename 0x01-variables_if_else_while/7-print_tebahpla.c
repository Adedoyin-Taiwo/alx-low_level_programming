#include <stdio.h>

/**
* main - print alphabets in reverse order
* Return:0
*/

int main(void)
{
	char t = 'z';

	while (t >= 'a')
	{
		putchar(t);
		t--;
	}
	putchar('\n');
	return (0);
}
