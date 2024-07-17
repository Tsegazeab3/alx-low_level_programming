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
 * binary_search - find value in sorted array using binary search method
 * @array: pointer to first element in array to be searched
 * @size: size of the array (number of elements)
 * @value: value to be searched for
 *
 * Return: index position of value or -1 if not found or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL || size == 0 || array[0] > value)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		print_array(&array[low], (high - low) + 1);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return (-1);
}
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
