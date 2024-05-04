#include "hash_tables.h"
/**
 * key_index - return the index of a key
 * @key: the name of the key
 * @size: size of the table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	if (key == NULL)
		return (-1);
	return (hash % size);
}
