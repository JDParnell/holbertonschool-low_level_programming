#include "lists.h"

/**
 *listint_len - returns length of list
 *@h: the list
 *Return: i
 */

size_t listint_len(const listint_t *h)
{
	listint_t *len = (listint_t *)h;
	int i;

	if (h == NULL)
		return (0);

	while (len != NULL)
	{
		i++;
		len = len->next;
	}
	return (i);
}
