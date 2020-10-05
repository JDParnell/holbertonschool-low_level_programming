#include "holberton.h"

/**
 *_strpbrk - finds if any set of chars are in a string
 *@s: the string being searched
 *@accept: the chars being searched for
 *Return: s if string found, null if not
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
