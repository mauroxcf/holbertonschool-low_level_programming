#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * *malloc_checked - check the code for Holberton School students.
 *@b: variable.
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{

int *a;

a = malloc(b);
if (!a)
{
exit(98);
}

return (a);
}
