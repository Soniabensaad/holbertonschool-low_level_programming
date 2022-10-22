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
	int j, k, i;

	if (width <= 0 || height <= 0)
    {
		return (NULL);
    }

	a = (int **)malloc(sizeof(*a) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			while (i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
		for (k = 0; k < width; k++)
			a[j][k] = 0;

	return (a);
}
