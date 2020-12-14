#include "lists.h"

/**
 *print_dlistint - prints a list
 *@h: the list
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *print = (dlistint_t *)h;
	int i = 0;

	if (print == NULL)
		return (0);

	while (print != NULL)
	{
		printf("%d\n", print->n);
		print = print->next;
		i++;
	}
	return (i);

}
