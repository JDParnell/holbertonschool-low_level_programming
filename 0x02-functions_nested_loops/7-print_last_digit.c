#include "holberton.h"
#include <math.h>

/**
 *print_last_digit - prints the last digit of n
 *@n: the number to get last digit of
 *
 *Return: Last digit of n
 */

int print_last_digit(int n)
{
	int i;

	if (n == -2147483648)
	{
		_putchar('0' + 8);
		return (8);
	}

	if (n < 0 && n != -2147483648)
		n = n * -1;
	i = n % 10;
	_putchar('0' + i);
	return (i);
}
