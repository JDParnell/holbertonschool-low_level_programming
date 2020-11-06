#include "holberton.h"

/**
 *set_bit - sets the nth bit of a number to 1
 *@n: the number to set
 *@index: which bit we are setting
 *Return: the new number
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 64)
		return (-1);

	*n = (1 << index) | *n;
	return (1);
}
