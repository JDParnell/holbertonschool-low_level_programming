#include "holberton.h"
/**
 *jack_bauer - prints every minute of 24
 */

void jack_bauer(void)
{
	int j, k, x, xx, y, yy;

	for (j = 0; j < 24; j++)
	{
		for (k = 0; k < 60; k++)
		{
			x = j % 10;
			xx = j / 10;
			y = k % 10;
			yy = k / 10;
			_putchar('0' + xx);
			_putchar('0' + x);
			_putchar(':');
			_putchar('0' + yy);
			_putchar('0' + y);
			_putchar('\n');
		}
	}
}
