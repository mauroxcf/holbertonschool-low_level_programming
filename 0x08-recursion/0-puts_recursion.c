#include "holberton.h"

/**
 * _puts_recursion - check the code for Holberton School students.
 * @s:variable
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
{
_putchar('\n');
}
}
