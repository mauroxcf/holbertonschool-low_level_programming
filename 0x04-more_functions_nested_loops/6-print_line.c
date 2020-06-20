#include "holberton.h"

/**
 * print_line - print line .
 * @n: variable
 * Return: Always 0.
 */

void print_line(int n)
{

int m;

for (m = 0; m < n; m++)
{
_putchar ('_');
}
_putchar ('\n');
}
