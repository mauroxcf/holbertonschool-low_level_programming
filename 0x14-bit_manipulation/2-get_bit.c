#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
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
