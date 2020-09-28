#include "holberton.h"

/**
 *swap_int - switches the value of two integer
 *@a: first value being swapped
 *@b: second value being swapped
 *Return: void, nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
