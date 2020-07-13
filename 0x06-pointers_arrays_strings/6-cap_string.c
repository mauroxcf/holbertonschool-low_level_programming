#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - capitalize a string.
 *@ptr: string
 * Return: Always 0.
 */

char *cap_string(char *ptr)
{

int a;
int b;
char s[] = {9, 10 , 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

for (a = 0; ptr[a] != '\0'; a++)
{
for (b = 0; s[b] != '\0'; b++)
{
if (s[b] == ptr[a])
if (ptr[a + 1] >= 'a' && ptr[a + 1] <= 'z')
ptr[a + 1] = ptr[a + 1] - 'a' + 'A';
}
}
return (ptr);
}
