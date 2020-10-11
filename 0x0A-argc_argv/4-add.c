#include "holberton.h"

/**
 *main - adds positive numebrs from command line
 *@argc: number of commands
 *@argv: array of commands
 *Return: 0 if successful, 1 if not
 */

int main(int argc, char *argv[])
{
	int i, j, total = 0;
	char *test;

	if (argc == 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		test = argv[i];
		for (j = 0; test[j] != '\0'; j++)
		{
			if (test[j] < 48 || test[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}

		printf("%d\n", total);
	return (0);
}
