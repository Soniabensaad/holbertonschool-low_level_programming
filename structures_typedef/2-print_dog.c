#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * init_dog - Initializes a dog structure
 * @d: A dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        return;
    }
    if (d->name == NULL)
    {
        printf("Name: (nil) \n");
    }
    else
    {
        printf("Name: %s\n", d->name);
    }

    if (d->age < 0)
    {
        printf("Age: (nil) \n");
    }
    else
    {
        printf("Age: %f\n", d->age);
    }
    if (d->owner == NULL)
    {
        printf("Owner: (nil) \n");
    }
    else
    {
        printf("Owner: %s\n", d->owner);
    }
}

