#include "hash_tables.h"
/**
 * hash_table_create - creates hash tables
 * @size: the size of the table
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size > 0)
	{
		hash_table_t *Table = malloc(sizeof(hash_table_t));
		unsigned long int i = 0;

		if (Table == NULL)
			return (NULL);
		Table->size = size;
		Table->array = malloc(sizeof(hash_node_t *) * size);
		if (Table->array == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			Table->array[i] = NULL;

		if (Table != NULL)
		{
			return (Table);
		}
	}
	return (NULL);
}

