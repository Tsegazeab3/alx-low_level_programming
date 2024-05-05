#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
void print_list(hash_table_t *table)
{
	unsigned long int i;
	int j;

	for (i = 0; i < table->size; i++)
	{
		hash_node_t *tmp = table->array[i];

		for (j = 0; tmp != NULL; j++)
		{
			printf("index:%lu.%d ---- name:%s",i,j, tmp->key);
			tmp = tmp->next;
		}
	}
}
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "cool");
	hash_table_set(ht,"mentioner","veryodd");
	print_list(ht);
    return (EXIT_SUCCESS);
}
