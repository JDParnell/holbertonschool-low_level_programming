#include "holberton.h"

/**
 *_strstr - searches a string for the exact match
 *@haystack: string being searched
 *@needle: the string being searched for
 *Return: pointer to were string is, or null if not there
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, str;

	j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			if (j == 0)
				str = i;
			j++;
		}
		else
		{
			if (haystack[i] == needle[0])
			{
				j = 1;
				str = i;
			}
			else
			{
				j = 0;
			}
		}
		if (needle[j] == '\0')
			return (haystack + str);
	}

	return ('\0');
}
