#include "holberton.h"

/**
 *read_textfile - prints a file
 *@filename: the file to be printed
 *@letters: the number of letters to be printed
 *Return: the numberof letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fr, fw, fo;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fo = open(filename, 0);
	if (fo == -1)
		return (0);

	fr = read(fo, buffer, letters);
	if (fr == -1)
		return (0);

	fw = write(1, buffer, fr);
	if (fw == -1)
		return (0);

	close(fo);
	free(buffer);
	return (fw);

}
