#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid created by your alloc _grid
 * @grid: the 2 dimensional grid
 * @height: the width of the holl thing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
