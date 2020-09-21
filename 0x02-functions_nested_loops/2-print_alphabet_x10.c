#include "holberton.h"

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
