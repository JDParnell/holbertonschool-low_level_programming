#include "holberton.h"
/**
 *print_last_digit - prints the last digit of n
 *@n: the number to get last digit of
 *
 *Return: Last digit of n
 */

int print_last_digit(int n)
{
	int i;

	if (n == INT_MIN)
	{
		_putchar('0' + 8);
		return (8);
	}
	if (n < 0)
		n = n * -1;
	i = n % 10;
	_putchar('0' + i);
	return (i);
}
