#include "holberton.h"

/**
 *_print_rev_recursion - prints a function in reverse recursively
 *@s: the string to be printed
 *Return: void no returns
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
