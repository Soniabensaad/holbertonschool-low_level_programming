#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - nested loop to make grid
 *
 *@width: width input
 * @height: height input
 *
 * Description: nested loop to make grid
 *
 * Return: pointer to 2
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a == NULL)
		{
			free(a);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
