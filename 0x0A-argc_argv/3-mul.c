#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - A program that multiplies two numbers, print the result, then a new line.
* @argc: # of arguments supplied to the program.
* @argv: Array of pointers to the arguments.
* Return: 0 (Program receives two arguments), 1 (does not receive two arguments)
*/

int main(int argc, char *argv[])
{
	int digi1, digi2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	digi1 = atoi(argv[1]);
	digi2 = atoi(argv[2]);
	mult = digi1 * digi2;
	printf("%d\n", mult);
	return (0);
}
