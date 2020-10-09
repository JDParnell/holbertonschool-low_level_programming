#include "holberton.h"

/**
 *main - prints the multiplication of 2 numbers passed via command line
 *@argc: number of commands
 *@argv: array of commands
 *Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
