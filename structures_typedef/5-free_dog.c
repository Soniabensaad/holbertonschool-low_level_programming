#include "dog.h"
#include <stdlib.h>



/**
 * print_dog - Initializes a dog structure
 * @d: A dog structure.
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
    if(d)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
