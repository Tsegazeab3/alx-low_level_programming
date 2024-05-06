#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the table to be printed
 * the hard part is the ,
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	int comma_flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *tmp = ht->array[i];

		if (ht->array[i] && comma_flag == 1)
		{
			printf(", ");
			comma_flag = 1;
		}
		for (j = 0; tmp != NULL; j++)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next != NULL)
				printf(", ");
			tmp = tmp->next;
		}

	}
	printf("}");
	printf("\n");
}


