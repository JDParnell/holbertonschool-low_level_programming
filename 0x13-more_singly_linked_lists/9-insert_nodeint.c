#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a node at index
 *@head: the list
 *@idx: where to insert
 *@n: the data
 *Return: the address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *insert = (listint_t *) *head;
	unsigned int i;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx; i++)
	{
		if (i + 1 == idx)
			prev = insert;
		insert = insert->next;
		if (insert == NULL && (i + 1) != idx)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	prev->next = new;
	new->next = insert;
	return (new);
}
