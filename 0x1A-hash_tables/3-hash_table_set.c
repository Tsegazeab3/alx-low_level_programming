#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hast_table
 * @key: the nodes key word
 * @value: the value of the key
 * Return: 1 if success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *key_cp = malloc(sizeof(key));
	char *value_cp = malloc(sizeof(value));
	hash_node_t *node = malloc(sizeof(hash_node_t *));
	unsigned long int index;

	strcpy(key_cp, key);
	strcpy(value_cp, value);
	if (key_cp == NULL || value_cp == NULL || ht == NULL)
	{
		free(key_cp);
		free(value_cp);
		free(node);
		return (0);
	}

	node->key = key_cp;
	node->value = value_cp;
	node->next = NULL;
	index = key_index((const unsigned char *)node->key, ht->size);
	if (ht->array[index] != NULL)
	{
		hash_node_t *tmp = malloc(sizeof(hash_node_t *));

		tmp = ht->array[index];
		ht->array[index] = node;
		node->next = tmp;
		return (1);
	}
	else
	{
		ht->array[index] = node;
		return (1);
	}
	return (0);
}
