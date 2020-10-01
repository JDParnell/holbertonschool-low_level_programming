#include "holberton.h"

/**
 *reverse_array - reverses an array of ints
 *@a: the array to be flipped
 *@n: size of the array
 *Return: void, no return
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
