#include "lists.h"

/**
 *print_list - takes a list and prints all elements in it
 *@h: the list to be printed
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	list_t *current = (list_t *)h;
	int i = 0;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		current = current->next;

		i++;
	}

	return (i);
}
