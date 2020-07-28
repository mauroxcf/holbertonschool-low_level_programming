#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the grid memori spaces
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
