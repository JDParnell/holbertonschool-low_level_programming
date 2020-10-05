#include "holberton.h"

/**
 *_memcpy - copies the memory from src to dest
 *@dest: the destination of the copy
 *@src: the source of the copy
 *@n: the amount of memory to copy
 *Return: the pointer to the memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
