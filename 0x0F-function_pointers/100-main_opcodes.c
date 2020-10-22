#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints the opcodes of the main function
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0 on success, exits with 1 or 2 on failure
 */

int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (argv[1] <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	bytes = atoi(argv[1]);
	return (0);

}
