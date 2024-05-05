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
	hash_node_t *node;
	int index;


	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
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

