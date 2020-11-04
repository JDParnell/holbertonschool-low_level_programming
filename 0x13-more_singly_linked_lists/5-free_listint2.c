#include "lists.h"

/**
 *free_listint2 - frees list then sets head to NULL
 *@head: the list
 *Return: void no return
 */

void free_listint2(listint_t **head)
{
	listint_t *freedom;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		freedom = *head;
		*head = (*head)->next;
		free(freedom);
	}

	*head = NULL;
}
