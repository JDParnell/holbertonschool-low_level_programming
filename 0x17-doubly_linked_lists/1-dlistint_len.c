#include "lists.h"

/**
 *dlistint_len - counts list
 *@h: the list
 *Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *count = (dlistint_t *)h;
	int i = 0;

	if (counnt == NULL)
		return (0);

	while (count != NULL)
	{
		i++;
		count = count->next;
	}
	return (i);
}
