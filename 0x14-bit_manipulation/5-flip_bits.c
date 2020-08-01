#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip.
 * @n:value.
 * @m: 2nd value to change.
 * Return: clear bit.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int neo;
	unsigned int a;
	unsigned int b = 0;

	neo = n ^ m;

	for (a = sizeof(n) * 8; a > 0; a--)
	{
		if ((neo >> a) & 1)
			b++;
	}
	return (b);
}
