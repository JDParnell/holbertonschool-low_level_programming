#include "holberton.h"

/**
 *string_toupper - turns all lowercase letters in string to upper
 *@s: the string to be uppercased
 *Return: s, hte string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] -= 32;
	}
	return (s);
}
