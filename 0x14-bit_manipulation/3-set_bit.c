#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - sets the value of a bit.
 * @n:value.
 * @index: index position.
 * Return: value bit.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 1;

	if (index > 64)
	{
		return (-1);
	}
	else
	*n = ((a << index) | *n);
	return (1);

}
