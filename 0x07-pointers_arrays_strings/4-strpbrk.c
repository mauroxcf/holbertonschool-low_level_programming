#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strpbrk - search a string for any of a set of bytes.
 *@s: string to compare.
 *@f: string with the letters compare.
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *f)
{
	int a;
	int b;


	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; f[b] != '\0'; b++)
		{
			if (s[a] == f[b])
			{
				return (s + a);
			}
		}

	}
	if (s[a] == f[b])
	{
		return (NULL);
	}
	return (NULL);
}
