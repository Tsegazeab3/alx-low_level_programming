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

	array = malloc((max - min + 2) * sizeof(int));
	if (min > max || array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
}
