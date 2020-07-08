#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{

unsigned int a;
char *ptr;

if (size == 0)
{
return (NULL);
}
ptr = malloc(sizeof(char) * size);

if (ptr == NULL)
{
return (0);
}
for (a = 0; a < size; a++)
{
ptr[a] = c;
}
ptr[a] = '\0';

return (ptr);
}
