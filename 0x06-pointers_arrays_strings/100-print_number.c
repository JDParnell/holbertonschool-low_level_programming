#include "holberton.h"
/**
 *print_number - recursively prints an int
 *@n: the number being printed
 *Return: the numebr
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			_putchar('2');
			n = n % 1000000000;
		}
		n = -n;
	}

	if (n / 10 != 0)
		print_number(n / 10);
	_putchar('0' + (n % 10));
}
