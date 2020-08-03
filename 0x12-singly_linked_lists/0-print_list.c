#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print every element of the node structure.
 *@h: head of the node.
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	unsigned int a;

	for (a = 0; h != NULL; a++)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}
