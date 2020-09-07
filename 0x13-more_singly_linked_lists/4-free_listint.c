#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint- free the linked list type listint_t.
 *@head:node head.
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	for (; head; )
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
