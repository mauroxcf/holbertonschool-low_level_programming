#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - print numbers of element of the node structure.
 *@h: head of the node.
 * Return: Numbers of elements.
 */

size_t list_len(const list_t *h)
{
	unsigned int a;

	for (a = 0; h != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}
