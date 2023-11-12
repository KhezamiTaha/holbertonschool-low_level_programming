#include "main.h"

/**
 *free_grid - Algorithms function
 *@grid: pointer
 *@height: pointer
 *
 *Return: 1 or 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
