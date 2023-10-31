#include "main.h"
#include <sys/stat.h>
/**
* create_file - creates file, and then fills it with content
* @filename: the name of the file to
* @text_content: content to be written
* Return: 1 (Success), -(failure)
*/

int create_file(const char *filename, char *text_content)
{
	int a, b, d_file;

	if (filename ==  NULL)
		return (-1);
	d_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (d_file < 0)
		return (-1);
	b = 0;
	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(d_file, text_content, b);
		if (a != b)
			return (-1);
	}
	close(d_file);
	return (1);
}
