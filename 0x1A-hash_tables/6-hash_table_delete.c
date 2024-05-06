#include "hash_tables.h"
/**
 * hash_table_delete - deletes the table
 * @ht: the table
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht != NULL)
	{
		hash_node_t *next;
		hash_node_t *current;
		unsigned long int i;

		for (i = 0; i < ht->size; i++)
		{
			if(ht->array[i] != NULL)
			{
				current = ht->array[i];
				while (current != NULL)
				{
					next = current->next;
					free(current->key);
					free(current->value);
					free(current);
					current = next;
				}
				ht->array[i] = NULL;
			}
		}
		free(ht->array);
		free(ht);
	}
}
