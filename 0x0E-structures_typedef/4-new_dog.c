#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * *_strdup - prints buffer in hexa
 * @str: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{

	int a;
	char *ptr;
	int b;


	if (!str)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
		;

	ptr = malloc(sizeof(char) * (a + 1));

	if (!ptr)
	{
		return (NULL);
	}

	for (b = 0; str[b] != '\0'; b++)
	{
		ptr[b] = str[b];
	}
	ptr[b] = '\0';
	return (ptr);
}

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
	newdog->name = _strdup(name);
	if (!newdog->name)
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	newdog->owner = _strdup(owner);
	if (!newdog->owner)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
