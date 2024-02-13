#include "main.h"
/**
 * alloc_grid - creates 2d lists
 * @width: width of the arrays
 * @height: height of the arrays
 * Return: pointer to a double list
 */
char **2d_string(int width, int height)
{
	char **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (char **) malloc(height * sizeof(char *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (char *) malloc(width * sizeof(char));
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
			j++;
		}
	}
	return (p);
}
