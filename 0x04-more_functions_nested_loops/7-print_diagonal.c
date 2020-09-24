#include "holberton.h"

/**
 *print_diagonal - prints n diagonal lines
 *@n: number of diagonal lines to print
 *Return: no returns
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
