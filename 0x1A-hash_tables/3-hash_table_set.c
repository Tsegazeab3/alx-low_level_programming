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
	char *value_cp;
	hash_node_t *node;
	int index;

	value_cp = malloc(strlen(value) + 1);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL || value_cp == NULL)
	{
		free(value_cp);
		free(node);
		return (0);
	}
	strcpy(value_cp, value);
	node->key = strdup(key);
	node->value = value_cp;
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
	free(value_cp);
	return (0);
}

