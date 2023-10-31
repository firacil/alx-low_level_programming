#include "main.h"

/**
 * alloc_grid - return pointers to 2d array of integer.
 * @width: width
 * @height: height.
 * Return: pointer tp grid.
 */

int **alloc_grid(int width, int height)
{
	int **gr;
	int x, y;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	gr = malloc(height * sizeof(*gr));
	if (gr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		gr[x] = malloc(width * sizeof(**gr));
		if (gr[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(gr[x]);
			free(gr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			gr[x][y] = 0;
	}

	return (gr);
}
