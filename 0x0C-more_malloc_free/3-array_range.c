#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: the minimum number
 * @max: the maximum number
 * Return: if min > max or malloc fails NULL else the pointer to the array
*/
int *array_range(int min, int max)
{
	int *array;
	int i, j = 0;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
}
