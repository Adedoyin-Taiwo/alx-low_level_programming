#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Adds two positive numbers, print the results, then a new line.
* @argc: # of arguments passed to the program.
* @argv: Array of pointers to the arguments.
* Return:  -1 (Contains non-digits), 0 (does  not).
*/

int main(int argc, char *argv[])
{
	int i_counter, j_counter, d_sum = 0;

	for (i_counter = 1; i_counter < argc; i_counter++)
	{
		for (j_counter = 0; argv[i_counter][j_counter]; j_counter++)
		{
			if (argv[i_counter][j_counter] < '0' || argv[i_counter][j_counter] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		d_sum += atoi(argv[i_counter]);
	}
	printf("%d\n", d_sum);
	return (0);
}
