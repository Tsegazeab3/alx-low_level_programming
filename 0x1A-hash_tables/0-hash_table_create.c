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
		hash_table_t *Table = malloc(size * sizeof(hash_node_t));

		if (Table != NULL)
		{
			return (Table);
		}
	}
	return (NULL);
}

