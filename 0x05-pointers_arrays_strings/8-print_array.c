#include "holberton.h"
#include <stdio.h>

/**
 * print_array - output of characters and strings.
 * @a:pointer variable.
 * @n:varibale
 * Return: Always 0.
 */

void print_array(int *a, int n)
{

int b;

for (b = 0; b < n ; b++)
{

if (b >= n - 1)


printf("%d", a[b]);

else

printf("%d, ", a[b]);

}

printf("\n");

}
