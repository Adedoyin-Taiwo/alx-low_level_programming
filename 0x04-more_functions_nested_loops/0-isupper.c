#include <stdio.h>
#include "main.h"

/**
* _isupper - if it is uppercase
* return: 1(true), 0 (false).
*/

int _isupper(int c)
{
	if ((c < = 90) && (c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
