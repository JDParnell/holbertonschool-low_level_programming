#include "holberton.h"

/**
 *more_numbers - prints 1-14 ten times
 *Return: no return
 */

void more_numbers(void)
{
	int i, j, x, y;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			x = j / 10;
			y = j % 10;
			if (x != 0)
				_putchar('0' + x);
			_putchar('0' + y);
		}
		_putchar('\n');
	}
}
