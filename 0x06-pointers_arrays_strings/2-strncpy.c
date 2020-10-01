#include "holberton.h"

/**
 *_strncpy - copys up to n characters from one string to another
 *@dest: the string being copied to
 *@src: the string beign copied from
 *@n: the max being copied
 *Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
