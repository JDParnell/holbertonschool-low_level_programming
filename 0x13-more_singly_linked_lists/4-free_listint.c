#include "lists.h"

/**
 *free_listint - frees a list
 *@head: the list to be freed
 *Return: void no return
 */

void free_listint(listint_t *head)
{
	listint_t *freedom;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		freedom = head;
		head = head->next;
		free(freedom);
	}

}
