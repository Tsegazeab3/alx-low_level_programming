#include "main.h"
/**
 * malloc_checked - returns a pointer to allocated memory
 * @b: is the number of space
 * Return: void pointer
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		return (98);
	}
	return (p);
}
