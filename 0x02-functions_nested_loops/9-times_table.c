#include "holberton.h"

/**
 * times_table - multiply tables.
 *
 * Return: Always 0.
 */

void times_table(void)
{
int a;
int b;
int tabla;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
tabla = a * b;
if (tabla <= 9)
{
if (b >= 1 && b <= 9)
{
_putchar(32);
}
_putchar(tabla + '0');
}
else if (tabla > 9)
{
_putchar(tabla / 10 + '0');
_putchar(tabla % 10 + '0');
}
if (b < 9)
{
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
}
}
