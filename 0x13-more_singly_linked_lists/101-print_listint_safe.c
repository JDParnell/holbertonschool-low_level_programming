#include "lists.h"

/**
 *print_listint_safe - prints a list
 *@head: the list to be printed
 *Return: number of nodes printed
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *print = (listint_t *)head;
	int i;

	if (head == NULL)
		exit(98);

	for (i = 0; print != NULL; i++)
	{
		printf("[%p] %d\n", (void *)&print, print->n);
		print = print->next;
	}

	return (i);
}
