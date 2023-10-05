#include "main.h"

/**
 * free_grid - frees 2 dimensional grid previously created
 * @grid: pointer to the array
 * @height: number of rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
