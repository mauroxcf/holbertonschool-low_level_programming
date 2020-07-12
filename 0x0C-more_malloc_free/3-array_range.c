#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - reserve and create array
 * @min: variable min integer
 * @max: variable max integer
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
int *ptr;
int a;
int result;

if (min > max)
{
return (NULL);
}

result = max - min;
ptr = malloc(result * (sizeof(int)) + 1);
if (!ptr)
{
return (NULL);
}
for (a = 0; a <= result; a++, min++)
ptr[a] = min;

return (ptr);
}
