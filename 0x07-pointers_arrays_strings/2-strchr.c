#include "holberton.h"

/**
 *_strchr - searches string for a given character
 *@s: the string being searched
 *@c: the character being searched for
 *Return: pointer to the location of the char
 */

char *_strchr(char *s, char c)
{

	if (s == NULL)
		return (NULL);

	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}

	if (*s == c)
		return (s);

	return (NULL);
}
