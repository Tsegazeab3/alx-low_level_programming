#include "main.h"
/**
 * alloc_grid - creates 2d lists
 * @width: width of the arrays
 * @height: height of the arrays
 * Return: pointer to a double list
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;

	if (width <= 0 || height <= 0)
		return (0);
	p = (int **)malloc(height * sizeof(int *));
	i = 0;

	if (p == NULL)
		return (NULL);

	while (i < height)
	{
		p[i] = (int *) calloc(width, sizeof(int));
		if (p[i] == NULL)
			return (NULL);
		i++;
	}
	return (p);
}
