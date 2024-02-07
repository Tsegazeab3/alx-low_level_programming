#include "main.h"
/**
 * create_array - creates an array of chars with specific char
 * @size: size of the array
 * @c: character
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *p = (char *) calloc(size, size * sizeof(c));
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
	else
		return (NULL);
}
