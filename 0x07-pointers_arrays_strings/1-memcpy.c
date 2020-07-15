#include "holberton.h"
#include <stdio.h>

/**
 * *_memcpy - copy to dest
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: integer.
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int count;


for (count = 0; count < n ; count++)
{
dest[count] = src[count];
}


return (dest);

}
