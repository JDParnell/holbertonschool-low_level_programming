#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *main - prints 1 -100, replacing multiples of 3 with fizz and 5 with buzz
 *Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	printf("\n");
	return (0);
}
