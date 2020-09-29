#include "holberton.h"

/**
 *_strcpy - copies a string
 *@dest: where the sting needs to be copied
 *@src: the string to be copied
 *Return: the pointer to the string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];

	return (dest);
}
