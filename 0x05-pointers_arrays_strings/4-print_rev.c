#include "holberton.h"

/**
 *print_rev - prints the reverse of a string
 *@s: the string to be mirrored
 *Return: void no returns
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	i--;
	while (i > -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
