#include "holberton.h"

/**
 *print_line - creates a line using n _'s
 *@n: the number of _'s to be used
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar('\n');
}
