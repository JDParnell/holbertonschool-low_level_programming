#include "search_algos.h"

/**
 *linear_search - searches an array for an element
 *@array: the array being searched
 *@size: the size of the array
 *@value: the value being searched for
 *Return: index of array element is found, -1 if not found
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
