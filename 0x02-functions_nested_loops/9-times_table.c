#include "holberton.h"

/**
 *times_table - prints the 9's times table
 */

void times_table(void)
{
	int i, j, x, y, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = i * j;
			x = z / 10;
			y = z % 10;
			z = i * (j + 1);
			if (x != 0)
				_putchar('0' + x);
			_putchar('0' + y);
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (z / 10 == 0)
					_putchar(' ');
			}
		}
	}
}
