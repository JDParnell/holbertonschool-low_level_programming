#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *print_array - prints n numbers from an array
 *@a: the array being printed
 *@n: how many elements to print
 *Return: void no return
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) < n)
			printf(", ");
	}
	printf("\n");
}
