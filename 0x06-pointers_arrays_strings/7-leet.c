#include "holberton.h"

/**
 *leet - converts into leet speak
 *@s: the string being converted
 *Return: the converted string
 */

char *leet(char *s)
{
	int i, j;
	char con[] = {'4', '3', '0', '7', '1'};
	char test[] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == test[j])
				s[i] = con[j / 2];
		}
	}

	return (s);
}
