#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
  * @s: the size to allocate
  *
  * Return: Nothing.
  */

void *malloc_checked(unsigned int s)
{
void *p;
p = malloc(s);
if (p == NULL)
{
exit(98);
}
return (p);
}

