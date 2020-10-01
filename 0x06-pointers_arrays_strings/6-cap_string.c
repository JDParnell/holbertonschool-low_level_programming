#include "holberton.h"

/**
 *cap_string - caps every word in the string
 *@s: the string being capped
 *Return: the pointer to the string
 */

char *cap_string(char *s)
{
	int i, j, t;
	char b[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		t  = 0;
		for (j = 0; j < 13; j++)
		{
			if (i != 0 && s[i - 1] == b[j])
				t = 1;
		}
		if ((i == 0 || t == 1) && s[i] <= 'z' && s[i] >= 'a')
			s[i] -= 32;
	}

	return (s);
}
