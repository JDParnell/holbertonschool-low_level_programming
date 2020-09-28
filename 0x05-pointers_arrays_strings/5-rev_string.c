#include "holberton.h"

/**
 *rev_string - reverses the contents of a string
 *@s: the string to be reversed
 *Return: void no return
 *
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}

	j -= 1;

	for (i = 0; i < j; i++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j--;
	}

}
