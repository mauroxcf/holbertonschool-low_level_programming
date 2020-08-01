#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * @n:value.
 * @index: index position.
 * Return: clear bit.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 1;

	if (index > 64)
	{
		return (-1);
	}
	else
		*n = (~(a << index)) & *n;
	return (1);

}
