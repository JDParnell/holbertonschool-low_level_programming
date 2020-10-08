#include "holberton.h"

/**
 *wildcmp - checks if two strings are identical, accounting for *
 *@s1: first string
 *@s2: second string, may contain *
 *Returns: 1 if "identical" otherwise returns 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 != *s2 && *s2 != '*')
		return (0);

	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));

	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*' && *(s2 + 1) == *(s1 + 1))
		return (wildcmp(s1 + 1, s2 + 1));

	return (-1);
}
