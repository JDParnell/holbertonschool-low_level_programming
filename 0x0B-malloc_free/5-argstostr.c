#include "holberton.h"

/**
 *_strcat - adds one string to the end of another string
 *@dest: the string getting added to
 *@src: the string being added to
 *Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

/**
 *argstostr - add all arguments from argv
 *@ac: number of arguments
 *@av: array of arguments
 *Return: pointer to new line
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *santa;
	char *nl = "\n";

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	santa = malloc(sizeof(char) * (len + 1));

	if (santa == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		santa = _strcat(santa, av[i]);
		santa = _strcat(santa, nl);
	}
	santa[len] = '\0';

	return (santa);
}
