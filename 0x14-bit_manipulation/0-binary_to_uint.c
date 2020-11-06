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



/**
 *binary_to_uint - converts string from binary to unsigned int
 *@b: the string to be converted
 *Return: unsigned int/0 if contains illegal characters
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int k, j = 0;

	if (b == NULL)
		return (0);

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '1' && b[k] != '0')
			return (0);
	}
	k -= 1;
	for (; k >= 0; k--)
	{
		i += ((b[k] - '0') * _pow_recursion(2, j));
		j++;
	}

	return (i);
}
