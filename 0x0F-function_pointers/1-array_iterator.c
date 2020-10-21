#include "function_pointers.h"

/**
 *array_iterator - goes through and perfoms a function on all elements
 *@size: size of the arry
 *@array: the array
 *@action: the function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
