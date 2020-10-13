#include "holberton.h"

/**
 *_strdup - creates a copy of a string using malloc
 *@str: the string to be copied
 *Return: the pointer to the copy of the string
 */

char *_strdup(char *str)
{
	char *cpy;
	int i, k;

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
	{}

	cpy = malloc((k + 1) * sizeof(char));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		cpy[i] = str[i];
	}
	cpy[i] = str[i];

	return (cpy);

}
