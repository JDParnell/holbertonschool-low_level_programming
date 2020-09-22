#include "holberton.h"

/**
 *print_alphabet_x10 - prints a-z 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}
