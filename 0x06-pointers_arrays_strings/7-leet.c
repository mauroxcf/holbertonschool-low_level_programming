#include "holberton.h"
#include <stdio.h>

/**
 * *leet - change certain letters to numbers.
 *@s:string of chars.
 * Return: Always 0.
 */

char *leet(char *s)
{
int count;
int count2;
char *ptr;
char *abc;
ptr = "4307143071";
abc = "AEOTLaeotl";

for (count = 0; s[count] != '\0'; count++)
{
for (count2 = 0; abc[count2] != '\0'; count2++)
{
if (s[count] == abc[count2])
{
s[count] = ptr[count2];
}
}
}

return (s);
}
