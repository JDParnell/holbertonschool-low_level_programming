#include "holberton.h"

/**
 *str_concat - combines two strings
 *@s1: first half of new string
 *@s2: second half of new string
 *Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *toothless;

	for (k = 0; s1[k] != '\0'; k++)
	{}

	for (l = 0; s2[l] != '\0'; l++)
	{}

	toothless = malloc((k + l + 1) * sizeof(char));

	for (i = 0; s1[i] != '\0'; i++)
		toothless[i] = s1[i];
	i -= 1;
	for (j = 0; s2[j] != '\0'; j++)
	{
		toothless[i + j] = s2[j];
	}
	toothless[i + j] = '\0';

	return (toothless);

}
