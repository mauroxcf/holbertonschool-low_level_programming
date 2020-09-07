#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node in the end.
 *@head: head of the node.
 *@n: value integer of the node.
 * Return: newnode create.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (0);
	}

	newnode->n = n;
	newnode->next = NULL;

	for (; *head; )
		head = &(*head)->next;

	*head = newnode;

	return (newnode);
}
