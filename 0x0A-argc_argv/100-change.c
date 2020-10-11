#include "holberton.h"

/**
 *main - prints number of coins needed to make change
 *@argc: number of arguments
 *@argv: the arguments of the command
 *Return: 1 if not a number, 0 if program runs
 */

int main(int argc, char *argv[])
{
	int total, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total < 1)
	{
		printf("0\n");
		return (0);
	}
	while (total != 0)
	{
		if (total >= 25)
			total -= 25;
		else if (total >= 10)
			total -= 10;
		else if (total >= 5)
			total -= 5;
		else if (total >= 2)
			total -= 2;
		else if (total >= 1)
			total -= 1;
		coins++;
	}

	printf("%d\n", coins);
	return (0);
}
