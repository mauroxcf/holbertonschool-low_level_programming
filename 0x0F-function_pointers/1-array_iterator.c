#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints every position of the array
 * @array: array of integers.
 * @size: size of the array.
 * @action: pointer function execute the function.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	for (a = 0; a < size; a++)
		action(array[a]);
}
