#include "holberton.h"

/**
 *_strcat - adds one string to the end of another string
 *@dest: the string getting added to
 *@src: the string being added to
 *Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = src[j];
	return (dest);
}
