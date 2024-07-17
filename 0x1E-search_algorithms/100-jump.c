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
	size_t jump = sqrt(size);
	size_t start = 0;
	size_t end = jump;

	if (!array || value < array[start]) 
		return (-1);
	while (start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[end] < value)
		{
			start = end;
			end += jump;
		}
		else
		{
			printf("Value found between indexes [%lu] and [%lu]\n", start, end);
			while (start <= end)
			{
				printf("Value checked array[%lu] = [%d]\n", start, array[start]);
				if (array[start] == value)
					return (start);
				start++;
			}
			return (-1);
		}
	}
		return (-1);
}
