#include "main.h"
#define MY_BUFFER_SIZE 1024
#include <sys/stat.h>
/**
* main - function that copies the content of a file to another file
* @argc: number of arguments passed to the program
* @argv: arguments array
* Return: 0
*/

int main(int argc, char *argv[])
{
	int d_file1, d_file2, a, b, c;
	char d_buffer[MY_BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	d_file1 = open(argv[1], O_RDONLY);
	if (d_file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	d_file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	while ((a = read(d_file1, d_buffer, MY_BUFFER_SIZE)) > 0)
	{
		if (d_file2 < 0 || write(d_file2, d_buffer, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(d_file1);
			exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b = close(d_file1);
	c = close(d_file2);
	if (b < 0 || c < 0)
	{
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d_file1);
		if (c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d_file2);
		exit(100);
	}
	return (0);
}
