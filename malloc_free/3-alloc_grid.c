#include <stdlib.h>
#include "main.h"
/**
 *str_concat - returns a concat of string
 *
 * @str1: char
 * @str2: char
 *
 * Description: a function that returns a concat of string
 *
 * Return: pointer or NULL
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
