#include "holberton.h"

/**
 *array_range - creates an array of ints
 *@min: lower number
 *@max: higher number
 *Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i, *m2m;

	if (min > max)
		return (NULL);

	m2m = malloc(((max - min) + 1) * sizeof(int));

	if (m2m == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		m2m[i] = min;
		min++;
	}

	return (m2m);
}
