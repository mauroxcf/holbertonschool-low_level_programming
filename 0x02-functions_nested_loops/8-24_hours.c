#include "holberton.h"

/**
 * jack_bauer - count down 24 hours.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
int count;
int count2;

for (count = 0; count < 24; count++)
{
for (count2 = 0; count2 < 60; count2++)
{
_putchar(count / 10 + '0');
_putchar(count % 10 + '0');
_putchar(':');
_putchar(count2 / 10 + '0');
_putchar(count2 % 10 + '0');
_putchar('\n');
}
}

}
