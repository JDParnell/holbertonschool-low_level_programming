#include "lists.h"

/**
 *reverse_listint - reverses a linked list
 *@head: the list
 *Return: the address of the new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *rev = (listint_t *) *head;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	prev = NULL;

	while (rev != NULL)
	{
		rev = (listint_t *)((size_t)prev ^ (size_t)rev ^
				     (size_t)(rev->next) ^
				     (size_t)(rev->next = prev) ^
				     (size_t)(prev = rev));
	}
	*head = prev;
	return (prev);
}
