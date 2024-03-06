#include "function_pointers.h"
/**
 * array_iterator - is used to apply a function to every pointer
 * @array: array of integers
 * @size: size of the array
 * @action: function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
