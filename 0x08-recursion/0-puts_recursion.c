#include "holberton.h"
/**
 *_puts_recursion - recursively prints each character of a string
 *@s: the string being printed
 *Return: void no return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
		_putchar(*s);
	if (*(s + 1) != '\0')
		_puts_recursion(s + 1);
	if (*(s + 1) == '\0' && *s != '\0')
		_putchar('/n');
}
