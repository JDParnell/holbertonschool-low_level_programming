#include "holberton.h"

/**
 *_atoi - takes a string and extracts an integer from it
 *@s: the string to extract the int from
 *Return: the int extracted
 */

int _atoi(char *s)
{
	int i, neg, ext;

	neg = 1;
	ext = 0;
	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == 45)
			neg *= -1;
		if (s[i] - 48 < 10 && s[i] - 48 >= 0)
		{
			ext = (ext * 10) + (s[i] - 48);
			if (s[i + 1] < 48 && s[i + 1] > 57)
				break;
		}
	}

	return (ext * neg);
}
