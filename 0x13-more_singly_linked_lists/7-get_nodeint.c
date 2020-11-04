#include "lists.h"

/**
 *get_nodeint_at_index - gets the nth node of a list
 *@head: the list
 *@index: the nth node
 *Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse = (listint_t *)head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		traverse = traverse->next;
		if (traverse == NULL)
			return (NULL);
	}
	return (traverse);
}
