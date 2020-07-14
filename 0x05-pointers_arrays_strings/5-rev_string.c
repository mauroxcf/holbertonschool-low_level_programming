#include "holberton.h"
#include <stdio.h>


/**
 * swap_f - swaps the value of two integers.
 * @a: first integer
 * @b: second integer
 */

void swap_f(char *a, char *b);

/**
 * rev_string - revert the string.
 * @s:pointer variable.
 * Return: Always 0.
 */


void rev_string(char *s)
{
int a;
char *b;
int swaps;

b = s;

for (a = 0; s[a] != '\0'; a++)
b++;

swaps = a / 2;
b--;

for (a = 0; a < swaps; a++)
{
swap_f(&s[a], b);
b--;
}

}

/**
 * swap_f - swaps the value of two integers.
 * @a: first integer
 * @b: second integer
 */

void swap_f(char *a, char *b)
{
char c;

c = *a;
*a = *b;
*b = c;
}
