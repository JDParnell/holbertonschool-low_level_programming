#include "holberton.h"
/**
 *_isdigit - checks if c is a digit
 *@c: the character being checked
 *Return: if digit 1, else 0
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
