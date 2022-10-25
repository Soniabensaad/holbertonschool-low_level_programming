#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- allocates memory using malloc
 * @s: size of allocation
 *
 *Return :Nothing
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

