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
	dlistint_t *new;
	dlistint_t *find;
	unsigned int i = 0;
	dlistint_t *tp;

	if (idx == 0)
	{	new = add_dnodeint(h, n);
		return (new);	}

	if (h == NULL)
		return (NULL);
	find = *h;
	while (i < idx)
	{
		if (find->next == NULL && (i + 1) != idx)
		{ return (NULL); }
		else if (find->next == NULL)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else
		{	find = find->next;
			i++; }
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tp = find->prev;
	new->next = find;
	tp->next = new;
	find->prev = new;
	new->prev = tp;
	return (new);
}
