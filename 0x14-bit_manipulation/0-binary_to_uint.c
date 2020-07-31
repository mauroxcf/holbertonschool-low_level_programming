#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number.
 *@b: string.
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	int result = 0;
	int pow = 1;

	while (b[a] != '\0')
	{
		a++;
	}
	a--;

	while (a >= 0)
	{
		if (b[a] != '1' && b[a] != '0')
		{
			return (0);
		}
		result += (b[a] - 48) * pow;
		pow *= 2;
		a--;
	}
	return (result);
}
