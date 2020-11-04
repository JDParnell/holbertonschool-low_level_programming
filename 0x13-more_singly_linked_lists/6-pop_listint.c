#include "lists.h"

/**
 *pop_listint - pops the head of a list
 *@head: the list being popped
 *Return: head's n
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int i;

	if (*head == NULL)
		return (0);

	pop = (listint_t *) *head;
	*head = (*head)->next;
	i = pop->n;
	free(pop);
	return (i);
}
