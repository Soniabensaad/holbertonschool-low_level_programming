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
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	i = 0;
	p = malloc(width * sizeof(p));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		p[i] = malloc(height * sizeof(p[i]));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; ++j)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < width)
	{
		j = 0;
		while (j < height)
		{
			p[j][i] = 0;
			j++;
		}
		i++;
	}
	return (p);
}