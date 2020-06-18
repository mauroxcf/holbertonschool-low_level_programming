#include "holberton.h"

/**
 * print_numbers - print numbers with putchar.
 * _putchar: print characters.
 */

void print_numbers(void)
{

char a = 48;

while (a <= 57)
{
_putchar (a);
a++;
}

_putchar ('\n');

}
