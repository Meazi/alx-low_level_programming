#include <stdlib.h>
/**
 * free_grid - create two dimensional grid
 * @grid: the grid to be freed
 * @height: number of rows
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
