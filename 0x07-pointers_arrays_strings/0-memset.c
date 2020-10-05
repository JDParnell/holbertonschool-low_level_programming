#include "holberton.h"

/**
 *_memset - converts n bytes to b, starting at s
 *@s: the area being converted
 *@b: the contant that things are being converted too
 *@n: the number of bytes to convert
 *Return: the pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
