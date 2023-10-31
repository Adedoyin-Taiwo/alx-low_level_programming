#include "main.h"

/**
* append_text_to_file - appends content to the end of a file
* @filename: the file
* @text_content: the content
* Return: 1 (Success) -1 (Failure)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, d_file;

	if (filename == NULL)
		return (-1);
	d_file = open(filename, O_WRONLY | O_APPEND);
	if (d_file < 0)
		return (-1);
	b = 0;
	if (text_content != NULL)
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
