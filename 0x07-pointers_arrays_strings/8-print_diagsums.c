#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - diag sums.
 *@a: array
 *@size: size of the array.
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int b;
	int c = 0;
	int diag = 0;
	int diag2 = 0;


	for (b = 0; b < size; b++)
	{
		c = (b * size) + b;
		diag += a[c];
	}
	for (b = 1; b <= size; b++)
	{
		c = (b * size) - b;
		diag2 += a[c];
	}
	printf("%d, %d\n", diag, diag2);
}
