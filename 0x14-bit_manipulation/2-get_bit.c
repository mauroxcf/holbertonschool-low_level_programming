#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - get bit in the index.
 *@n: value
 *@index: index position to set
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 64)
	{
		return (-1);
	}
	else
		value = ((n >> index) & 1);
	return (value);
}
