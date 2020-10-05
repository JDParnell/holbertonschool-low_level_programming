#include "holberton.h"

/**
 *_strspn - searchs a string for a second string
 *@s: the string being searched
 *@accept: the string being searched for
 *Return: the number of bytes that match
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, test;
	unsigned int ct;

	for (i = 0; s[i] != '\0'; i++)
	{
		test = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				test = 1;
				ct++;
				break;
			}
		}
		if (test == 0 && ct > 0)
			return (ct);

	}

	return (0);
}
