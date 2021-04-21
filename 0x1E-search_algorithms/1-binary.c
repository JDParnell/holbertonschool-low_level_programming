#include "search_algos.h"

void print_array(int *array, size_t size);

/**
 *binary_search - performs a binary search on an array
 *@array: the array being searched
 *@size: the size of the array
 *@value: the value being searched for
 *Return: -1 if not found, index if found
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t mid, l = 0, r = size - 1;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		print_array(array + l, r - l + 1);
		mid = (r + l) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}

/**
 *print_array - prints an array
 *@array: the array being printed
 *@size: size of the array
 *Return: Void, none
 **/

void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
