#include "holberton.h"

/**
 * print_last_digit - function that print the last digit.
 *@a:variable.
 * Return: Always 0.
 */
int print_last_digit(int a)
{

if (a % 10 < 0)
{
(a = a % 10 * -1);
_putchar(a % 10 + '0');
}
else
_putchar(a % 10 + '0');
return (a % 10);

}
