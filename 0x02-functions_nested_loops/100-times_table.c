#include "holberton.h"
/**
 *print_times_table - creates a times table of n
 *@n: the number to loop up to
 *Return: no return
 */
void print_times_table(int n)
{
	int i, j, m, x, y, z;

	if (n > 0 && n < 16)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				x = m / 100;
				y = ((m / 10) % 10);
				z = m % 10;
				m = i * (j + 1);
				if (x != 0)
					_putchar('0' + x);
				if (y != 0 || x != 0)
					_putchar('0' + y);
				_putchar('0' + z);
				if (j == n)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (m / 100 == 0)
						_putchar(' ');
					if ((m / 10) % 10 == 0 && m / 100 == 0)
						_putchar(' ');
				}

			}
		}
	}
}
