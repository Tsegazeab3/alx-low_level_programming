#include "search_algos.h"
/**
* binary_algorithm - making my own function of binary search
* @array: the arry of the function
* @value: the value to be searched for
* @left: the adjustable value to the left
* @right: the adjustable value to the right
* Return: the index of a value
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i = 0;

	printf("Seaching in array: ");
	for (i = left; i < right; i++)
	{
		if (i != right - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
	return;
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
	size_t low = 0;
	size_t high = size - 1;
	int mid;
	if (array != NULL)
	{
		while(low < high)
		{
			print_array(array, low, high);
			mid = (low + high) / 2;
			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				low = mid + 1; 
			else if (array[mid] > value)
				high = mid - 1;
		}
	}
	return (-1);
}
