#include "main.h"

/**
* get_endianness - check for the  endianness
* Return: 0 if big endian, or 1 if little endian
*/

int get_endianness(void)
{
	int dig;

	dig = 1;
	if (*(char *)&dig == 1)
		return (1);
	else
		return (0);
}
