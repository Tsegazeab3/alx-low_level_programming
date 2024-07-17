#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the start of the array
 * @size: size of the array (number of elements)
 *
 * Return: nothing
 */
void print_array(int *array, int size)
{
	int i;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}

	printf("\n");
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
		while (low < high)
		{
			print_array(&array[low], (high - low) + 1);
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
