#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * add_node - add node to hash table.
 *@head: head of the linked list
 *@key: key represent
 *@value: value of the key
 * Return: *head.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	if (!new_node->key)
		free(new_node->key);

	new_node->value = strdup(value);
	if (!new_node->value)
		free(new_node->value);

	new_node->next = *head;
	*head = new_node;
	return (*head);
}

/**
 * hash_table_set - hash table with the new key.
 *@ht: new node.
 *@key: new key.
 *@value: new value
 * Return: 1 exit success or 0 fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = 0;

	if (!key || !value || strlen(key) == 0 || strlen(value) == 0)
		return (0);

	if (!ht || !ht->array || !ht->size)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[ind] == 0)
	{
		if ((strcmp(ht->array[ind]->key, key)) == 0)
		{
			free((ht->array[ind])->value);
			(ht->array[ind])->value = strdup(value);
			return (1);
		}
		else
			add_node(&(ht->array[ind]), key, value);

	}
	else
		add_node(&(ht->array[ind]), key, value);
	return (1);
}
