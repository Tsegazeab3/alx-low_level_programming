#include "search_algos.h"
/**
* linear_search - uses linear search algorith to search for integers
* @array: is a pointer to the first elent of the array
* @size: is the size of the array
* @value: is the value we are searching for
* Return: the index of the value
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (value == array[i])
				return (i);
		}
	}
	return (-1);
}
