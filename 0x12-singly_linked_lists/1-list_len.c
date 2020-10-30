#include "lists.h"

/**
 *list_len - gets the lenght of a list
 *@h: the list to be measured
 *Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	list_t *current = (list_t *)h;
	int i = 0;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		i++;
		current = current->next;
	}

	return (i);
}
