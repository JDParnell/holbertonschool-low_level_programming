#include "lists.h"

/**
 *sum_dlistint - adds all elements of a list
 *@head: the list
 *Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *sum = head;

	if (sum == NULL)
		return (0);

	while (sum != NULL)
	{
		total += sum->n;
		sum = sum->next;
	}
	return (total);
}
