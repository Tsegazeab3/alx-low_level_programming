#include "search_algos.h"
/**
* exponential_search - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: index where value is located
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t x;
	int final;

	if (!array)
		return (-1);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i >= size)
		x = size - 1;
	else
		x = i;
	final = binary_search(&array[i / 2], (x - i / 2 + 1), value);
	if (final == -1)
		return (-1);
	return (final + i / 2);
}
