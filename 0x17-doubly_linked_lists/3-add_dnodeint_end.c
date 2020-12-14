#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a list
 *@head: the head of the list
 *@n: the element to store in the new node
 *Return: address of new node, or null if node creation fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	return (new);
}
