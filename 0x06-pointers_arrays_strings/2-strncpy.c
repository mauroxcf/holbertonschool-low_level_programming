#include "holberton.h"

/**
 * _strncpy - description
 * @dest: description
 * @src: description
 * @n: description
 * 
 * Return: The string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int counter;

for (counter = 0; src[counter] != '\0' && counter < n; counter++)
{
dest[counter] = src[counter];
}

for ( ; counter < n; counter++)
dest[counter] = '\0';

return (dest);
}
