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
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == 0)
		{
			for (--i; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}