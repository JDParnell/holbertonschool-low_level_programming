#include "lists.h"

/**
 *free_list - frees the list
 *@head: list to be freed
 *Return: void no return
 */

void free_list(list_t *head)
{
	list_t *freer;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		freer = head;
		head = head->next;
		free(freer->str);
		free(freer);
	}

}
