#include "holberton.h"

/**
 * _puts - output of characters and strings.
 * @str:pointer variable.
 * Return: Always 0.
 */

void _puts(char *str)
{

int a;

for (a = 0; str[a] != '\0'; a++)
{
_putchar (str[a]);
}

_putchar ('\n');

}
