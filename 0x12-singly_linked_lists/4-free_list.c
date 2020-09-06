#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list- free the linked list type list_t.
 *@head:node head.
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	for (; head; )
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
