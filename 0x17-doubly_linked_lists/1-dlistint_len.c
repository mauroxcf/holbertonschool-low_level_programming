#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - print numbers of element of the node structure.
 *@h: head node.
 * Return: Numbers of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}
	return (count);
}
