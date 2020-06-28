#include "holberton.h"

/**
 * _strcmp - Description
 * @s1: Description
 * @s2: Description
 *
 * Return: 0 or diference.
 */

int _strcmp(char *s1, char *s2)
{

int counter;

for (counter = 0; s1[counter] != '\0'; counter++)
{

if (s1[counter] != s2[counter])
{
return (s1[counter] - s2[counter]);
}

}

return (0);
}
