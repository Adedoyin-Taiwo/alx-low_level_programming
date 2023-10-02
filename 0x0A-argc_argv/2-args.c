#include <stdio.h>

/**
* main - Prints all the arguments passed to it.
* @argc: # of arguments passed.
* @argv: Array of pointers to the arguments.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int counter = 0;

	while (counter < argc)
	{
		printf("%s\n", argv[counter]);
		counter++;
	}
	return (0);
}
