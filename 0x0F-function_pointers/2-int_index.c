#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - match the array numbers with other functions.
 * @array: array of numbers.
 * @size: size of the array.
 * @cmp: pointer to functions.
 * Return: return the positions of the match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (a = 1; a < size; a++)
		{
			if (cmp(array[a]))
				return (a);
		}
	}
	return (-1);
}
