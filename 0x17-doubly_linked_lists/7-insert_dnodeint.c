#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a node at the index
 *@h: the list
 *@idx: the index
 *@n: the value to store
 *Return: the address of hte new node, or null on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *find = *h;
	unsigned int i = 0;
	dlistint_t *tp;

	if (new == NULL)
		return (NULL);

	if (find == NULL && idx != 0)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (i < idx)
	{
		if (find->next == NULL && (i + 1) != idx)
		{
			return (NULL);
		}
		else
		{
			find = find->next;
			i++;
		}
	}
	tp = find->prev;
	new->next = find;
	tp->next = new;
	find->prev = new;
	new->prev = tp;
	return (new);
}
