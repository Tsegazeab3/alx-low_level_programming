#include "search_algos.h"
/**
* binary_algorithm - making my own function of binary search
* @array: the arry of the function
* @value: the value to be searched for
* @left: the adjustable value to the left
* @right: the adjustable value to the right
* Return: the index of a value
 */
int binary_algorithm(int *array, int value, size_t left, size_t right)
{
	size_t mid = (left + (right - 1)) / 2;
	size_t i;

	if (left >= right)
	{
		return (-1);
	}
	printf("Seaching in array: ");
	for (i = left; i < right; i++)
	{
		if (i != right - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_algorithm(array, value, left, mid));
	else
		return (binary_algorithm(array, value, mid + 1, right));
}
/**
* binary_search - searches through a sorted array in the binary_algorithm
* @array: the array to be searched
* @size: size of the array
* @value: value to be searched
* Return: the index of the value
*/
int binary_search(int *array, size_t size, int value)
{
	if(array == NULL)
		return (-1);
	int i = binary_algorithm(array, value, 0, size);

	return (i);
}
