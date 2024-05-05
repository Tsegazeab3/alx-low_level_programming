#include "hash_tables.h"
/**
 * hash_table_get - gets the value for a key
 * @ht: the table
 * @key: the key
 * Return: NULL if no value, value if value is found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = key_index((const unsigned char *) key, ht->size);
	hash_node_t *node = ht->array[index];

	if (node == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

