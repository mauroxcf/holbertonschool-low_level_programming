#include "search_algos.h"

/**
 * printf_array - print array
 * @array: array of numbers
 * @b_index: begin index of the array
 * @l_index: last index of the array
 * Return: 0
 */
void printf_array(int *array, int b_index, int l_index)
{
	int j = b_index;

	for (; j <= l_index; j++)
	{
		if (j != l_index)
			printf("%d, ", array[j]);
		else
			printf("%d\n", array[j]);
	}
}
/**
 * binary_search - searches for a value in an array of integers
 * @array: array of numbers
 * @size: size of the array
 * @value: value to search in the array
 * Return: 0
 */
int binary_search(int *array, size_t size, int value)
{
	int middle, L = 0, R = (size - 1);

	if (array)
	{
		printf("Searching in array: ");
		printf_array(array, L, R);
		while (L <= R)
		{
			middle = ((L + R) / 2);
			if (value > array[middle])
			{
				L = middle + 1;
				if (L < R)
				{
					printf("Searching in array: ");
					printf_array(array, L, R);
				}
			}
			else if (value < array[middle])
			{
				R = middle - 1;
				if (L < R)
				{
					printf("Searching in array: ");
					printf_array(array, L, (R + 1));
				}
			}
			else
				return (middle);
		}
	}
	return (-1);
}
