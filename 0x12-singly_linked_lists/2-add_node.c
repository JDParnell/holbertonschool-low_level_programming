#include "lists.h"

/**
 *add_node - adds a node to the beginning of a list
 *@head: pointer to the head of the list
 *@str: the string to be added
 *Return: address of the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		for (i = 0; new->str[i] != '\0'; i++)
		{}
		new->len = i;
	}
	*head = new;
	return (*head);
}
