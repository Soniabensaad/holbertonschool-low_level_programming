#include "dog.h"
#include <stdlib.h>



/**
 * print_dog - Initializes a dog structure
 * @d: A dog structure.
 *
 * Return: Nothing
 */
char *scopy (char *t)
{
    int i = 0, j = 0;
    char *m;
    if (t == NULL)
    {
        return (NULL);
    }
    
    while (t[i] != '\0')
    {
        i++;
    }
    m = malloc(sizeof(*t));
    if (m == NULL)
    {
        return(NULL);
    }
    while (t[j] != '\0')
    {
        m[j] = t[j];
        j++;
    }
    m[j] = '\0';
    return (m);
}
/**
 * print_dog - Initializes a dog structure
 * @d: A dog structure.
 *
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
    {
        return (NULL);
    }
    dog->age = age;
    dog->name = scopy(name);
    if (!dog->name)
    {
        free(dog->name);
        return (NULL);
    }

    dog->owner = scopy(owner);
    if (!dog->owner)
    {
        free(dog->owner);
        
        return (NULL);
    }
    return (dog);
}