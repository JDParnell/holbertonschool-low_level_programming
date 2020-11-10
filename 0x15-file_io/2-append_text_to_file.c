#include "holberton.h"

/**
 *append_text_to_file - puts text at the end of a file
 *@filename: the file to be added too
 *@text_content: the text to be added
 *Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fa;
	int i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fa = open(filename, O_WRONLY | O_APPEND);
	if (fa == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
	{}

	fa = write(fa, text_content, i);
	if (fa == -1)
		return (-1);
	close(fa);
	return (1);
}
