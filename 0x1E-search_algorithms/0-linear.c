#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array of numbers
 * @size: size of the array
 * @value: value to search in the array
 * Return: 0
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i <= size; i++)
		{
		if (array[i] == value)
			return (array[i]);

		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);

		}
	}
	return (0);
}
