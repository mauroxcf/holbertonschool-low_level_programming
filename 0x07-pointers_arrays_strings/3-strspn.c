#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - length of a prefix substring.
 *@s: variable.
 *@f: variable.
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *f)
{

int count;
int count2;
unsigned int a;
a = 0;
for (count = 0; s[count] != '\0'; count++)
{
for (count2 = 0; f[count2] != '\0'; count2++)
{
if (f[count2] == s[count])
{
a++;
break;
}
else if (f[count2 + 1] == '\0')
return (a);
}
}
return (a);
}
