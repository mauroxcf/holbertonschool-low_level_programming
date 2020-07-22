#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog.
 *@name: name of the dog.
 *@age: age of the dog.
 *@owner: owner of the dog.
 * Return: the new dog objects.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
