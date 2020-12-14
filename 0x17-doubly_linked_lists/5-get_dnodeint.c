#include "lists.h"

/**
 *get_dnodeint_at_index - gets node at index
 *@head: the list
 *@index: the index
 *Return: the node, or Null if node != exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *find = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while (i <= index)
	{
		if (find->next == NULL && i != index)
			return (NULL);
		else if (i == index)
			break;
		else
		{
			i++;
			find = find->next;
		}
	}
	return (find);
}
