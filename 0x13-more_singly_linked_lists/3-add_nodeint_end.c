#include "lists.h"

/**
 *add_nodeint_end - adds node to end of list
 *@head: start of list
 *@n: the data
 *Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, traverse;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		traverse = (listint_t)*head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new;
	}
	return (new);
}
