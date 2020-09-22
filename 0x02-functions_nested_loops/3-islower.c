#include "holberton.h"

/**
 *_islower - checks to see if c is a lowercase letter
 *@c: the letter being tested
 *
 *Return: returns a 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
