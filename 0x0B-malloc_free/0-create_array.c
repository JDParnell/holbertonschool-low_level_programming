#include "holberton.h"

/**
 *create_array - creates an array of size size and returns a pointer
 *to the array after filling it with c
 *@size: size of the array to be made
 *@c: the value each element of the array is initialized to
 *Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ary;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ary = malloc(size);

	if (ary == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ary[i] = c;

	return (ary);
}
