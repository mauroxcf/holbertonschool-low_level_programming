#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - prints buffer in hexa
 * @str: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{

int a;
char *ptr;
int b;

if (!str)
{
return (NULL);
}
for (a = 0; str[a] != '\0'; a++)
;

ptr = malloc(sizeof(char) * a);

if (!str)
{
return (NULL);
}

for (b = 0; str[b]; b++)
{
ptr[b] = str[b];
}

return (ptr);
}
