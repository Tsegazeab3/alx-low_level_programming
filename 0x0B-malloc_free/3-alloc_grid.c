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
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)calloc(height, sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *) calloc(width,sizeof(int));
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}
	return (p);
}
