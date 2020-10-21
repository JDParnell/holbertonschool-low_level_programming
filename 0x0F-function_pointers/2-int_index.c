#include "function_pointers.h"

/**
 *int_index - searchs an array for an integer
 *@array: the array to search
 *@size: the size of the array
 *@cmp: pointer to functions
 *Return: index of first element on success, -1 on fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
			return (i);
	}
	return (-1);
}
