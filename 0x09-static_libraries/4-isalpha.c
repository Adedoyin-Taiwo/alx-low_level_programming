#include "main.h"

/**
* _isalpha - the function returns if charcter is upper or lowercase
* Return: 0 if false, 1 if true
* @c: this is the test character
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}


