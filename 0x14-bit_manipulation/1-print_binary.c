#include "holberton.h"

/**
 *print_binary - prints the binary rep of a nmber
 *@n: the number to be printed
 *Return: void no return
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}
