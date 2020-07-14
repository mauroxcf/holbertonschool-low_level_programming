#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - output of characters and strings.
 * @dest:pointer variable.
 * @src:varibale
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{

int count;


for (count = 0; src[count] != '\0'; count++)

dest[count] = src[count];


dest[count] = '\0';

return (dest);
}
