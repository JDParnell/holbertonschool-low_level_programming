#include "lists.h"

/**
 *free_dlistint - frees a list
 *@head: the list being freed
 *Return: void no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *fred = head;

	if (fred == NULL)
		return;

	while (fred != NULL)
	{
		if (fred->prev != NULL)
			free(fred->prev);
		if (fred->next == NULL)
		{
			free(fred);
			return;
		}
		else
			fred = fred->next;
	}
}
