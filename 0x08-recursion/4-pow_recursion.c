#include "holberton.h"

/**
 *_pow_recursion - calculates x to the y power
 *@x: the base
 *@y: the power
 *Return: x to the y power
 */

int _pow_recursion(int x, int y)
{
	int xy = 1;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	if (y > 0)
	{
		xy = x * _pow_recursion(x, y - 1);
	}
	return (xy);
}
