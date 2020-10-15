#include "holberton.h"

/**
 *string_nconcat - combine 2 string
 *@s1: string
 *@s2: string 2
 *@n: the number of bytes to steal from s2
 *Return: the pointer to the combined string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}

	if (n >= j)
		n = j;

	s3 = malloc((i + n + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}
