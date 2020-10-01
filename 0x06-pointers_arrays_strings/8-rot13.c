#include "holberton.h"

/**
 *rot13 - rotates alpha values by 13
 *@s: the string being rotated
 *Return: pointer to the rotated string
 */

char *rot13(char *s)
{
	int i, j;
	char con[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	char test[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == test[j])
			{
				s[i] = con[j];
				break;
			}
		}
	}
	return (s);
}
