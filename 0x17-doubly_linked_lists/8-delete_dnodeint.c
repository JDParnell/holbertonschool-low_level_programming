#include "lists.h"

/**
 *delete_dnodeint_at_index - delets a node at index
 *@head: the list
 *@index: the node to be deleted
 *Return: 1 on success, -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *find;
	dlistint_t *tp, *tn;
	unsigned int i = 0;

	if (*head == NULL || !head)
		return (-1);
	find = *head;
	if (index == 0)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(find);
			return (1);
		}
		free(find);
		*head = NULL;
		return (1);
	}
	while (i < index)
	{
		if (find->next == NULL)
		{ return (-1); }

		else
		{
			find = find->next;
			i++; }	}
	tp = find->prev;
	if (find->next != NULL)
	{	tn = find->next;
		tp->next = tn;
		tn->prev = tp; }
	else
		tp->next = NULL;
	if (find)
		free(find);
	return (1);
}
