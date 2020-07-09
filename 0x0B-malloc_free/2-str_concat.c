#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concadenate two strings with malloc
 * @s1: 1ra string of characters
 * @s2: 2do string of characters
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{

int a;
char *ptr;
int b;
int c;
int d;

if (!s1)
{
s1 = "";
}
if (!s2)
{
s2 = "";
}

for (a = 0; s1[a] != '\0'; a++)
;
for (b = 0; s2[b] != '\0'; b++)
;
ptr = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);

if (!ptr)
{
return (NULL);
}
for (c = 0, d = 0; c <= (a + b + 1); c++)
{
if (c < a)
{
ptr[c] = s1[c];
}
else
ptr[c] = s2[d++];
}

return (ptr);

}
