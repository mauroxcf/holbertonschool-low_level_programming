#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print every element of the node structure.
 *@h: head node.
 * Return: Always 0.
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
