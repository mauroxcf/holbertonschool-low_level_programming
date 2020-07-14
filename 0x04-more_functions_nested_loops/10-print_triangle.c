#include "holberton.h"

/**
 * print_triangle - print a triangle depending of the heigh and weight.
 *@size: character that made the form of the square.
 * Return: Always 0.
 */

void print_triangle(int size)
{

int a, b, c;


for (a = 0; a < size; a++)
{
for (b = 1; b < size - a; b++)
{
_putchar(32);
}
for (c = 0; c <= a; c++)
{
_putchar(35);
}
_putchar('\n');
}

if (size <= 0)
_putchar ('\n');
}
