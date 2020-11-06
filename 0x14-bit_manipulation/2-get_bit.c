#include "holberton.h"

/**
 *get_bit - retruns the bit at index
 *@n: the number being tested
 *@index: the bit to git
 *Return: the bit at index, or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	n = n >> index;
	return (1 & n);
}
