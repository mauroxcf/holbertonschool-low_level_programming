#include "holberton.h"

/**
 * print_square - print a square depending of the heigh and weight.
 *@size: character that made the form of the square.
 * Return: Always 0.
 */

void print_square(int size)
{

int m, n;

for (m = 0; m < size; m++)
{
for (n = 0; n < size; n++)
_putchar (35);
_putchar ('\n');
}
if (size <= 0)
_putchar ('\n');
}
