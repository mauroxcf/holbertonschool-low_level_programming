#include "holberton.h"
#include <stdio.h>

/**
 * *rot13 - move each word in 13 positions of the string.
 *@s:string of characters.
 * Return: Always 0.
 */

char *rot13(char *s)
{

int count;
int count2;
char *alpha;
char *rot13;

alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (count = 0; s[count] != '\0'; count++)
{
for (count2 = 0; alpha[count2] != '\0'; count2++)
{
if (s[count] == alpha[count2])
{
s[count] = rot13[count2];
break;
}
}
}

return (s);
}
