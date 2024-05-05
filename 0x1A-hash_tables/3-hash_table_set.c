#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - sets a node into a table
 * @ht: the table
 * @key: the key of the node
 * @value: the value represented by the key
 * Return: 0 if not success and 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *key_copy;
	hash_node_t *node;
	int index;

	key_copy = malloc(strlen(key) + 1);
	if (key_copy == NULL || value == NULL || ht == NULL)
	{
		free(key_copy);
		return (0);
	}
	strcpy(key_copy, key);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = key_copy;
	node->value = (char *)value;
	node->next = NULL;
	index = key_index((const unsigned char *)key_copy, ht->size);
	if (ht->array[index] != NULL)
	{
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	else if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	return (0);
}

