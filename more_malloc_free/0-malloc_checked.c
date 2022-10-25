#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array.
 *Return : 0
 */

void *malloc_checked(unsigned int s)
{
    void* p;
    p = malloc(s);
    if (p == NULL)
    {
        exit(98);
    }
    return (p);
}
