#include "main.h"

/**
 * free_grid - Entry point
 *
 * @grid : int[][]
 * @height : integer
 *
 * Description: 'frees a 2 dimensional grid.'
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[(height - 1) - i]);
	free(grid);
}

