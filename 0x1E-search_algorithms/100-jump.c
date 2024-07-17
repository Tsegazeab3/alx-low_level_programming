#include "search_algos.h"
/**
* jump_search - searches through an array using jump search algorith
* @array: the array to be searched in
* @size: the size of the array
* @value: the value to be searched
* Return: the index of the searched value
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t jump = sqrt(size);
	size_t start = 0;
	size_t end = array[start + jump];

	while (start < size)
	{
		if (array[end] == value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", start, end);
			return (end);
		}
		if (array[end] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", start, end);
			for (i = start; i <= end; i++)
			{
				if (array[i] == value)
					return (i);
			}
		}
		start = end;
		end += jump;
		if (end > size)
			end = size;
	}
	return (-1);
}
