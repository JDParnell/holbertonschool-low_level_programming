#include "holberton.h"

/**
 *flip_bits - determines how many bits one number is from another
 *@n: first number
 *@m: second number
 *Return: the number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	for (i = 0; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}
