#include "lists.h"

/**
 *sum_listint - adds up a linked list
 *@head: the list being added
 *Return: the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *traverse = (listint_t *)head;
	int i = 0;

	if (head == NULL)
		return (0);

	while (traverse != NULL)
	{
		i += traverse->n;
		traverse = traverse->next;
	}
	return (i);
}
