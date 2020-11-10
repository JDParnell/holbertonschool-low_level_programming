#include "holberton.h"

/**
 *main - mimics the shell cp command
 *@argc: number of commands given
 *@argv: array of commands given
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[1024];

	if (argc != 3)
	{		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);	}
	if (argv[1] == NULL)
	{		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		exit(98);	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
			, argv[1]);
		exit(98);	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{		dprintf(STDERR_FILENO,
			"Error: Can't write to file %s\n", argv[2]);
		exit(99);	}
	while (read(file_from, buffer, 1024) && file_from != -1 &&
	       write(file_to, buffer, 1024) && file_to != -1)
	{}
	if (file_from == -1)
	{		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (file_to == -1)
	{		dprintf(STDERR_FILENO,
			"Error: Can't write to file %s\n", argv[2]);
		exit(99); }
	file_from = close(file_from);
	if (file_from == -1)
	{		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", file_from);
		exit(100); }
	if (close(file_to) == -1)
	{		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", file_to);
		exit(100);	}
	return (0); }
