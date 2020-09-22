#include "holberton.h"

/**
 *_abs - returns absolute value of n
 *@n: int being converted
 *
 *Return: n if greater than 0, n * -1 if less than 0
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
