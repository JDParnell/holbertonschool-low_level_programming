#include "holberton.h"

/**
 *_strncat - adds one string to another, up to n or NULL
 *@dest: the string being added to
 *@src: the string getting added to dest
 *@n: the maximum number of characters being added
 *Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; j < (n - 1) && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (n != 0)
		dest[i] = src[j];
	return (dest);
}
