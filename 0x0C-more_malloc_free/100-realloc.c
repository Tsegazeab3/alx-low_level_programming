#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the old size of the pointer
 * @new_size: the updated size of the pointer
 * Return: pointer to an array
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size * sizeof(char));
		if (new_ptr == NULL)
			return (NULL);
		return(new_ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (ptr);
	}
	else if (new_size > old_size && new_size != 0)
	{
		new_ptr = malloc(new_size * sizeof(char));
		if (new_ptr == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			new_ptr[i] = ((char *)ptr)[i];
		free(ptr);
		return (new_ptr);
	}
	else if (new_size == old_size)
		return (ptr);
	return(NULL);
}
