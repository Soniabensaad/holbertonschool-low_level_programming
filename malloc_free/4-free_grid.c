#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}

