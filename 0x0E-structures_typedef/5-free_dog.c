#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory dogs.
 *@d:dog.
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	if (!d)
	{
		return (0);
	}
	free(d->name);
	free(d->owner);
	free(d);
}
