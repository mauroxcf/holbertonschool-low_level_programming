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
	if (f[0] == '\0')
	{
		return (s);
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
				if (s[a + 1] == f[b + 1])
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
