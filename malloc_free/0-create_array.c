#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 *
 * @A: pointer
 * @size:integer
 * @c:pointer of array
 *
 * Description: a function that creates an array of chars,
 *
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;
if (size == 0)
{
return (NULL);
}
a = malloc(size * sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
a[i] = c;
}
return (a);
}
