#include "holberton.h"

/**
 *puts_half - prints the second half of a string
 *@str: the string to be halved
 *Return: void no return
 */

void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i + 1) / 2;

	for (; n < i; n++)
		_putchar(str[n]);
	_putchar('\n');

}
