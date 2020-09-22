#include "holberton.h"

/**
 *print_sign - prints the sign of n
 *@n: the int being tested
 *
 *Return: 0 if n is 0, 1 if n is positive, and -1 if n is negative
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
