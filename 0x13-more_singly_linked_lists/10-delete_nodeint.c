#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node located at index
 *@head: the list
 *@index: the node to be deleted
 *Return: 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *delete = (listint_t *) *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (i + 1 == index)
			prev = delete;
		delete = delete->next;
		if (delete == NULL)
			return (-1);
	}
	prev->next = delete->next;
	free(delete);
	return (1);
}
