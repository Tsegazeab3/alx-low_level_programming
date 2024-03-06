#include "function_pointers.h"
/**
 * int_index - function searches for integers
 * @array: array of integers
 * @size: size of array
 * @cmp: is the function used to compare the values
 * Return: the result after comaprison
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
