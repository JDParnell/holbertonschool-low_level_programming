#include "holberton.h"

/**
 *_strlen_recursion - returns string length recursively
 *@s: the string being measured
 *Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int n = 1;

	if (s == '\0')
		return (0);

	if (*(s + 1) != '\0')
		n += _strlen_recursion(s + 1);
	return (n);
}

/**
 *_do_pal - checks if string is palindrome
 *@s: string being tested
 *@t: tail of s
 *Return: 1 if palindrome, 0 if not
 */

int _do_pal(char *s, char *t)
{
	if (*s != *t)
		return (0);
	else if (s >= t)
		return (1);

	return (_do_pal(s + 1, t - 1));
}

/**
 *is_palindrome - tests to see if string is a palindrome
 *@s: string being tested
 *Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int pal = _strlen_recursion(s);
	char *t;

	if (pal == 0 || pal == 1)
		return (1);

	t = s + (pal - 1);
	return (_do_pal(s, t));
}
