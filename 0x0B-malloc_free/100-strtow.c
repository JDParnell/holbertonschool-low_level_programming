#include "holberton.h"

/**
 *_strlen - returns the lenght of the string passed in
 *@s: the string being passed
 *Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}

	return (i);
}

/**
 *slicelen - returns the lenght of the first word of a string
 *@s: the string
 *Return: the length
 */

int slicelen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
	{

	}

	return (i);
}

/**
 *_str_slice - cuts a string to either NULL or first space
 *@s: string being sliced
 *@size: initial size of the string
 *Return: length of slice
 */

char *_str_slice(char *s, int size)
{
	int i;
	char *reslice, *slice;

	slice = malloc(sizeof(char) * (size + 1));

	if (slice == NULL)
		return (NULL);

	for (i = 0; *s != ' ' && s != '\0'; i++)
	{
		slice[i] = *s;
		s++;
	}
	if (*s == ' ')
		s++;
	slice[i] = '\0';
	size = _strlen(slice);

	reslice = malloc(sizeof(char) * (size + 1));
	if (reslice == NULL)
		return (NULL);

	for (i = 0; slice[i] != '\0'; i++)
		reslice[i] = slice[i];
	reslice[i] = slice[i];
	free(slice);

	return (reslice);
}

/**
 *strip_space - strips excess spaces from strings
 *@str: the string being stripped
 *@size: the size of the string
 *Return: the stripped string
 */

char *strip_space(char *str, int size)
{
	int i, j = 0;
	char *restp, *stp;

	stp = malloc(sizeof(char) * size);
	if (stp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			stp[j] = str[i];
			j++;
		}
		else if (j != 0 && str[i + 1] != '\0' && str[i + 1] != ' ')
		{
			stp[j] = str[i];
			j++;
		}
	}
	stp[j] = str[i];

	size = _strlen(stp);

	restp = malloc(sizeof(char) * (size + 1));
	if (restp == NULL)
		return (NULL);

	for (i = 0; stp[i] != '\0'; i++)
	{
		restp[i] = stp[i];
	}
	restp[i] = stp[i];
	free(stp);

	return (restp);
}

/**
 *strtow - takes a string and seperates it into words
 *@str: the string being seperated
 *Return: an array of strings
 */

char **strtow(char *str)
{
	int i, j, size = 0, wc = 0;
	char *strip;
	char  **grid;

	if (str == NULL || str == '\0')
		return (NULL);


	size = _strlen(str) + 1;
	strip = strip_space(str, size);

	for (i = 0; strip[i] != '\0'; i++)
	{
		if (strip[i] == ' ')
			wc++;
	}
	wc++;

	grid = malloc(wc * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		grid[i] = malloc((slicelen(str) + 1) * sizeof(char));
		if (grid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		grid[i] = _str_slice(str, slicelen(str) + 1);
	}

	return (grid);

}
