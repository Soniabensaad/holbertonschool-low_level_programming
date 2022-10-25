#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
int *p;
int i, k;
if (min > max)
{
return (NULL);
}
p = malloc((max - min + 1) * sizeof(*p));
if (p == NULL)
{
return (NULL);
}
k = 0;
for (i = min; i <= max; i++)
{
p[k] = i;
k++;
}
return (p);
}
