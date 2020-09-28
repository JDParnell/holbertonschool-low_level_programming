#include "holberton.h"

/**
 *puts2 - prints every otehr value of string
 *@str: the string being printed
 *Return: void no return
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
