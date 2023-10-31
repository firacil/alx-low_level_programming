#include "main.h"

/**
 * free_grid - free previous memory.
 * @grid: double pointer
 * @height: grid height.
 * Return: None.
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
