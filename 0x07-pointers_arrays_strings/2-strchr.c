#include "holberton.h"

/**
 *_strchr - searches string for a given character
 *@s: the string being searched
 *@c: the character being searched for
 *Return: pointer to the location of the char
 */

char *_strchr(char *s, char c)
{
	int i;

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (*s == c)
		return (s);

	return (NULL);
}
