#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * *string_nconcat - concadenate two strings.
 *@s1: variable.
 *@s2: variable.
 *@n: variable
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int count, count2, count3, count4;
char *ptr;

if (!s1)
s1 = "";

if (!s2)
s2 = "";

for (count = 0; s1[count] != '\0'; count++)
;

for (count2 = 0; s2[count2] != '\0'; count2++)
;

if (n >= count2)
{
n = count2;
}

ptr = malloc(sizeof(char) * (count + n) +1);
if (!ptr)
{
return (NULL);
}

for (count3 = 0, count4 = 0; count3 < ((count) + n); count3++)
{
if (count3 < count)
{
ptr[count3] = s1[count3];
}
else
ptr[count3] = s2[count4++];
}

ptr[count3] = '\0';

return (ptr);
}
