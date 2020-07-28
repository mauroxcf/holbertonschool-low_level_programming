B#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - asign dinamic memory 2d dimen array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int b;
	int c;

	if (height == 0 && width == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
		if (!a)
		{
			return (NULL);
		}
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(sizeof(int) * width);
			if (!a[b])
				free(a[b]);
	}
	for (c = 0; c < width; c++)
	{
		a[c] = malloc(sizeof(int) * height);
			if (!a[c])
				free(a[c]);
	}
	return (a);
}
