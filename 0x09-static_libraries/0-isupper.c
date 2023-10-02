#include <stdio.h>
#include "main.h"

/**
* _isupper - if it is uppercase
* Return: 1(true), 0 (false).
* @c: an integer
*/

int _isupper(int c)
{
	if ((c <= 90) && (c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
