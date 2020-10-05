#include "holberton.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_diagsums - prints the sums of both diagonal lines in a double array
 *@a: the array being printed
 *@size: the size of the arrays
 *Return: void, no returns
 */

void print_diagsums(int *a, int size)
{
	int i, j, t1, t2, n;

	n = size - 1;
	t1 = 0;
	t2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				t1 += *((a + i * size) + j);
			if (i + j == n)
				t2 += *((a + i * size) + j);
		}
	}

	printf("%d, %d\n", t1, t2);

}
