#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * scopy - second function
 * @t: string
 *
 * Description: 'set string'
 *
 * Return: string
 */
char *scopy(char *dest, char *src)
{
    int index = 0;
    do
    {
        *(dest + index) = *(src + index);
    } while (*(src + index++));
    return (dest);
}
/**
 * new_dog - prints a new dog
 * @name: A string.
 * @age:float
 * @owner:string
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
    {
        return (NULL);
    }
    if (name == NULL)
        dog->name = NULL;
    else
    {
        dog->name = malloc((strlen(name) + 1));
        if (dog->name == NULL)
        {
            free(dog);
            return (NULL);
        }
        dog->name = scopy(dog->name,name);
    }
    if (owner == NULL)
    {
        dog->owner = NULL;
    }
    else
    {
        dog->owner = malloc(strlen(owner) +1);
        if (dog->owner == NULL)
        {
            free(dog->name);
            free(dog);
            return (NULL);
        }
        dog->owner = scopy(dog->owner,owner);
    }

    dog->age = age;
    return (dog);
}