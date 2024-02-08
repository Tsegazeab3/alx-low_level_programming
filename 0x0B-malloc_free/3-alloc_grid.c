#include "main.h"
/**
 * alloc_grid - creates 2d lists
 * @width: width of the arrays
 * @height: height of the arrays
 * Return: pointer to a double list
 */
int **alloc_grid(int width, int height)
{
	int **p = (int **) calloc(height, sizeof(int));
	int i = 0;

	while (i < height)
	{
		p[i] = (int *) calloc(width, sizeof(int));
		i++;
	}
	return (p);
}
