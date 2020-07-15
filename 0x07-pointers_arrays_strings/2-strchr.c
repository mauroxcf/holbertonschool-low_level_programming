#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string.
 *@s: variable.
 *@c: variable
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{

for (; *s; s++)
{
if (*s == c)
return (s);
}
return (!c ? s : '\0');
}
