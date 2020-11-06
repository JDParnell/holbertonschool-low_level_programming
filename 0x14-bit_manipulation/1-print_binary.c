#include "holberton.h"

/**
 *print_binary - prints the binary rep of a nmber
 *@n: the number to be printed
 *Return: void no return
 */

void print_binary(unsigned long int n)
{
	unsigned long int catalyst = 2147483648;
	int fb = 0;

	while (catalyst > 0)
	{
		if ((n & catalyst) == 0)
		{
			if (fb == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			fb = 1;
		}
		catalyst = catalyst >> 1;
	}
	if (fb == 0)
		_putchar('0');
}
