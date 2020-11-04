#include "lists.h"

/**
 *print_listint - prints a list of ints
 *@h: the list to be printed
 *Return: the number of prints
 */

size_t print_listint(const listint_t *h)
{
	listint_t *print = (listint_t *)h;
	int i = 0;

	if (h == NULL)
		return (0);

	while (print != NULL)
	{
		printf("%d\n", print->n);
		print = print->next;
		i++;
	}
	return (i);
}
