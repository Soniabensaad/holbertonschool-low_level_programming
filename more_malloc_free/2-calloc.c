#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int j;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}
for (j = 0; j < (nmemb * size); j++)
{
*(p + j) = '\0';
}
return (p);
}
