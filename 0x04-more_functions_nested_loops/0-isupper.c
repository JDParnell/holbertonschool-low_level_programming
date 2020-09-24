#include "holberton.h"

/**
 *_isupper - determines if a character is uppercase
 *@c: the character being tested
 *Return: 1 if upper, else 0
 */


int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
