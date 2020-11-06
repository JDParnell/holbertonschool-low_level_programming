#include "holberton.h"

/**
 *get_endianness - checks if big or little endianness
 *Return: 0 if big, 1 if litte
 */

int get_endianness(void)
{
	int end = 1;
	char *y = (char *)(&end);

	return (*y - '0');
}
