#include "holberton.h"

/**
 *printerror - prints an error message
 *@err: the error code
 *@filename: name of the file
 *@fc:value of fd
 *Return: the error code
 */

int printerror(int err, char *filename, int fc)
{
	if (err == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (err);
	}
	else if (err == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			filename);
			return (err);
	}
	else if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		return (err);
	}
	else if (err == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fc);
		return (err);
	}
	return (0);
}

/**
 *main - mimics the shell cp command
 *@argc: number of commands given
 *@argv: array of commands given
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, fft, ftt, rt, wt = 0;
	char buffer[1024];

	if (argc != 3)
		exit(printerror(97, "NA", 0));
	if (argv[1] == NULL)
		exit(printerror(98, argv[1], 0));
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
		exit(printerror(98, argv[1], 0));
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to < 0)
		exit(printerror(99, argv[2], 0));

	while ((rt = read(file_from, buffer, 1024)) && rt > 0 && wt >= 0)
	{
		wt = write(file_to, buffer, rt);
		if (rt < 0)
			exit(printerror(98, argv[1], 0));
		if (wt < 0)
			exit(printerror(99, argv[2], 0));
	}

	fft = close(file_from);
	if (fft < 0)
		exit(printerror(100, "NA", file_from));
	ftt = close(file_to);
	if (ftt < 0)
		exit(printerror(100, "NA", file_to));
	return (0);
}
