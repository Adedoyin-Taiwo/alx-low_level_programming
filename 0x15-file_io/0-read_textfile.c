#include "main.h"

/**
* read_textfile - reads a text file, prints it to the POSIX standard output
* @filename: the file
* @letters: the string
* Return: the number of characters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int d_file;
	int a, b;
	char *d_buffer;
	if (filename == NULL)
		return (0);
	d_file = open(filename, O_RDONLY);
	if (d_file < 0)
		return (0);
	d_buffer = malloc(sizeof(char) * letters);
	if (d_buffer == NULL)
		return (0);
	a = read(d_file, d_buffer, letters);
	if (a < 0)
	{
		free(d_buffer);
		return (0);
	}
	d_buffer[a] = '\0';
	close(d_file);
	b = write(STDOUT_FILENO, d_buffer, a);
	if (b < 0)
	{
		free(d_buffer);
		return (0);
	}
	free(d_buffer);
	return (a);
}
