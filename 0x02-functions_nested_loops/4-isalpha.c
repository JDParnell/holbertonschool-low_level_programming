#include "holberton.h"
/**
 *_isalpha - checks if c is an alpha character
 *@c: the letter being tested
 *
 *Return: 1 if alpha, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
