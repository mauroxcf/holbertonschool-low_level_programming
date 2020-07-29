#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concadenate all arguments.
 *@ac: numbers of arguments
 *@av: arguments.
 * Return: pointer.
 */

char *argstostr(int ac, char **av)
{
	int count;
	int count2;
	int total;
	char *ptr;
	char *ptr2;

	if (ac == 0 && av == NULL)
		return (NULL);

	for (count = 0; count < ac; count++)
	{
		for (count2 = 0; av[count][count2] != '\0'; count2++, total++)
			;
		total++;
	}
	ptr = malloc(sizeof(char) * total + 1);
		if (!ptr)
		{
			return (0);
		}

		ptr2 = ptr;
	for (count = 0; count < ac; count++)
	{
		for (count2 = 0; av[count][count2] != '\0'; count2++)
		{
			*ptr = av[count][count2];
				ptr++;
		}

		*ptr = '\n';
		ptr++;
	}
	return (ptr2);
}
