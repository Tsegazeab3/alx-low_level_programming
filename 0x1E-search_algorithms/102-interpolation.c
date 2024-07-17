#include "search_algos.h"
/**
* interpolation_search - uses the interpolation algorithm to search in an array
* @array: the array that is searched
* @size: the size of the array
* @value: the value that is searched
* Return: the index of the value in the array or -1 if not found
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, pos;

	if (!array || value < array[l])
		return (-1);
	while (l < h)
	{
		pos = l + (((h - l) / (array[h] - array[l])) * (value - array[l]));
		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
		{
			l = pos + 1;
		}
		else
		{
			h = pos - 1;
		}
	}
	return (-1);
}
