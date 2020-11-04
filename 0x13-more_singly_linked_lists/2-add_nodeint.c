#include "lists.h"

/**
 *add_nodeint - adds a node to the beginning of a list
 *@head: pointer to the head of the list
 *@n: the data
 *Return: address of the new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;

	*head = new;
	return(new);

}
