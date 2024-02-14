#include "main.h"
#include "string.h"
/**
 * _calloc - creates and allocates memory for an array
 * @nmemb: the number of values
 * @size: size of members
 * Return: pointer to a string
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
   		pointer[i] = '\0';
    return (pointer);
}