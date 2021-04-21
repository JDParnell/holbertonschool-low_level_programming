#include "search_algos.h"

void print_array(int *array, size_t size);

/**
 *binary_helper - like hamburger helper but for binary searches
 *@array: the array being searched
 *@size: size of the array
 *@value: the value being searched for
 *@oset: the offset value or the recursion to keep track of index
 *Return: -1 if not found, the index if found
 **/

int binary_helper(int *array, size_t size, int value, int oset)
{
	size_t mid;

	print_array(array, size);
	if (size == 1)
	{
		if (array[oset] == value)
			return (oset);
		else
			return (-1);
	}
	mid = (size / 2) + oset;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (binary_helper(array, size / 2, value, mid));
	else
		return (binary_helper(array, size / 2, value, oset));
}

/**
 *binary_search - performs a binary search on an array
 *@array: the array being searched
 *@size: the size of the array
 *@value: the value being searched for
 *Return: -1 if not found, index if found
 **/

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_helper(array, size, value, 0));
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
