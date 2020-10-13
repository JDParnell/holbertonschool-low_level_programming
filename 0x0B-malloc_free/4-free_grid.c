#include "holberton.h"

/**
 *free_grid - frees up memory for gri
 *@grid: the array to be freed
 *@height: the size of the grid
 *Return: void no return
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
