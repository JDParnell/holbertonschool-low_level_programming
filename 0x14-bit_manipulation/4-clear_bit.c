#include "holberton.h"

/**
 *clear_bit - sets nth bit to 0
 *@n: the number to set
 *@index: wich index we are setting to 0
 *Return: 1 on succes, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & (~(1 << index));
	return (1);
}
