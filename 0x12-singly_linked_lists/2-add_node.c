#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - calculates the length of the string.
 * @s:pointer variable.
 * Return: Always 0.
 */

unsigned int _strlen(const char *s)
{

	unsigned int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	return (a);


}

/**
 * add_node - add a new node.
 *@head: head of the node.
 *@str: string.
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (0);
	}

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
