#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strstr - locate a substring.
 *@s:string to compare
 *@f:string that will do the comparation.
 * Return: Always 0.
 */

char *_strstr(char *s, char *f)
{
	int a;
	int b;

	if (!s[0] && !f[0])
	{
		return (NULL);
	}

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; f[b] != '\0'; b++)
		{
			if (s[a] != f[b])
			{
				b++;
			}
			else if (s[a] == f[b])
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
