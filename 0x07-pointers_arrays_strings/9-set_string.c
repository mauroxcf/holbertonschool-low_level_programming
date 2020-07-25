#include "holberton.h"
#include <stdio.h>

/**
 * set_string - using a double pointer to a pointer.
 *@s:doble pointer.
 *@to:pointer.
 * Return: Always 0.
 */

void set_string(char **s, char *to)
{
	*s = to;

}
