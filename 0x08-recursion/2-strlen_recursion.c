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
