#include "holberton.h"

/**
 *malloc_checked - runs malloc and checks to make sure it runs.
 *@b: the int being stored in memory
 *Return: a void pointer. if Malloc fails 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
