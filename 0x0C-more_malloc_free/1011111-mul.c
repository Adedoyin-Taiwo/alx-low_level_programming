#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>

/**
* main - multiplies two numbers
* @argc: # of arguments
* @argv: passed arguments
* Return: 0
*/

int main(int argc, char **argv)
{
	unsigned long int mul, num1, num2;
	char dec1char, dec2char;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);
	printf("num1 num2 %lu %lu \n", num1, num2);
	mul = num1 * num2;
	printf("multiple is %lu", mul);
	while (num1 > 0 || num2 > 0)
	{
		dec1char = '0' + (num1 % 10);
		dec2char = '0' + (num2 % 10);
		if (isdigit(dec1char) && isdigit(dec2char))
		{
			continue;
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
		num1 = num1 / 10;
		num2 = num2 / 10;
	}
	printf("%lu\n", mul);
	return (0);
}
