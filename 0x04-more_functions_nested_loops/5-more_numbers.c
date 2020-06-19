#include "holberton.h"

/**
 * print_more_numbers - print more numbers with putchar.
 * _putchar: print characters.
 */

void more_numbers(void)
{

int a;
for (a = 0; a <= 9; a++)
{

int b;
for (b = 0; b <= 14; b++)
{
if (b / 10 >= 1)
{
_putchar ( b / 10 + '0');
}

_putchar (b % 10 + '0');
}


_putchar ('\n');
}

}



