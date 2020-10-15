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

	m2m = malloc((max - min) * sizeof(int));
	if (m2m == NULL)
		return (NULL);

	for (i = min; i <= max; i += sizeof(int))
	{
		m2m[i] = i;
	}

	return (m2m);
}
