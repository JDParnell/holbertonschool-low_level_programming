#include "holberton.h"

/**
 *create_file - makes a file
 *@filename: name of the file to be made
 *@text_content: a null terminated string to write ot the file
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fc;
	int i;

	if (filename == NULL)
		return (-1);

	fc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fc == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
	{}
	fc = write(fc, text_content, i);
	if (fc == -1)
		return (-1);

	close(fc);

	return (1);
}
