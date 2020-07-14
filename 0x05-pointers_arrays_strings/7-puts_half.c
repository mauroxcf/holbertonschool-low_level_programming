#include "holberton.h"

/**
 * puts_half - output of characters and strings.
 * @str:pointer variable.
 * Return: Always 0.
 */

void puts_half(char *str)
{

int n;

for (n = 0; str[n] != '\0' ; n++)
{

if ((n - 1) / 4)

_putchar (str[n]);

}

_putchar ('\n');

}
