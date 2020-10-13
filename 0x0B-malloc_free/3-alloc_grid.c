#include "holberton.h"

/**
 *alloc_grid - creates a 2d array init to 0
 *@width: width of grid
 *@height: height of grid
 *Return: pointer to the grid
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			for (j = 0; j <= i; j++)
				free(grid[j]);
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
