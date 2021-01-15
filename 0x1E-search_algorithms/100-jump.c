#include "search_algos.h"

/**
 * jump_search - using jump search algorithm in a array
 * @array: array
 * @size: size of the array
 * @value: value to search
 * Return: Always EXIT_SUCCESS
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t j_next = jump;
	size_t j_previous = 0;

	if (array)
	{
		printf("Value checked array[%d] = [%d]\n", (int)j_previous, array[j_previous]);
		while (1)
		{
			if (j_next > size - 1)
			break;

			else if (array[j_next] >= value)
			break;

			j_previous = j_next;
			j_next += jump;
			printf("Value checked array[%ld] = [%d]\n", j_previous, array[j_previous]);
		}
		printf("Value found between indexes [%ld] and [%ld]\n", j_previous, j_next);
		while (j_previous < size)
		{
			printf("Value checked array[%ld] = [%d]\n", j_previous, array[j_previous]);
			if (array[j_previous] == value)
			return (j_previous);

			j_previous++;
		}
	}
	return (-1);
}
