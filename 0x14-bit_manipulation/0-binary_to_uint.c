#include "main.h"

/**
* binary_to_uint - converts binary to unsigned int
* @b: the binary number
* Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int tot = 0;
	int len = 0, i;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	for (i = 0; i < len; i++)
	{
		tot <<= 1;
		tot += (b[i] - '0');
	}
	return (tot);
}
