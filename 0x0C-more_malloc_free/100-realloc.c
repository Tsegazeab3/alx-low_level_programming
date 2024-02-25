#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the old size of the pointer
 * @new_size: the updated size of the pointer
 * Return: pointer to an array
*/
void *_realloc(void*ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int i,k;
	if (old_size > new_size)
		k = new_size;
	else
		k = old_size;
	new_ptr = malloc(k * sizeof(char));
	if (new_ptr == NULL)
		return (NULL);
	for(i = 0;i < k ; i++)
		new_ptr[i] = ptr[i];
	free(ptr);
	return (new_ptr);
}