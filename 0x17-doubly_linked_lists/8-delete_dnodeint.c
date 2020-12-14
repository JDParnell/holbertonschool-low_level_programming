#include "lists.h"

/**
 *delete_dnodeint_at_index - delets a node at index
 *@head: the list
 *@index: the node to be deleted
 *Return: 1 on success, -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *find = *head;
	dlistint_t *tp, *tn;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1); }
	while (i < index)
	{
		if (find->next == NULL && (i + 1) != index)
		{ return (-1); }
		else
		{
			find = find->next;
			i++; }	}
	tp = find->prev;
	tn = find->next;
	tp->next = tn;
	tn->prev = tp;
	free(find);
	return (1);
}
