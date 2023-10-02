#include "main.h"

/**
* _isdigit - check if arg is a digit
* Return: 1(trrue), 0 (false)
* @c: interger to be checked
*/

int _isdigit(int c)
{
	if ((c <= 57) && (c >= 48))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
