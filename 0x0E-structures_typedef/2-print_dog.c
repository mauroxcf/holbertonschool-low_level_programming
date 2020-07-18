#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the data object.
 *
 *@d: structure dog.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if ((*d).name == NULL)
	{
		printf("Name: (nil)");
	}
	else if ((*d).owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else

	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);

}
