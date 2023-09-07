#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - the function prints a string.
 * Return: 1
 */
int main(void)
{
	constant char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t bytes_written = write(2, message, strlen(message));

	if (bytes_written == -1)
	{
	return (1);
	}
	return (0);
}
