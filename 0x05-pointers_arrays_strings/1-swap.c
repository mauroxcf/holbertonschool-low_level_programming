#include "holberton.h"

/**
 * swap_int - swap intengers value.
 * @a:pointer variable.
 * @b:pointer variable.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{

int c;
c = *a;

*a = *b;
*b = c;

}
