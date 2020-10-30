#include "lists.h"

/**
 *add_node_end - adds node to end of list
 *@head: the list
 *@str: string to be entered into the node
 *Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *traverse;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		for (i = 0; new->str[i] != '\0'; i++)
		{}
		new->len = i;
	}

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		traverse = (list_t *) *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new;
	}

	return (new);
}
