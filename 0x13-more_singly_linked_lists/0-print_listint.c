#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print every element of the node structure.
 *@h: head of the node.
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
