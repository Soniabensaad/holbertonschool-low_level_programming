#include "search_algos.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int linear_search(int *array, size_t size, int value)
{
   size_t i;

    if (array == NULL)
    {
        return(-1);
    }
    
    for (i = 0; i <= size; i++)
    {
        if (i == size && array[i] != value)
        {
            return -1;
        }
        else if (i == size && array[i] != value)
        {
            
            printf("not found");
        }
        else
        {
            printf("Found [%ld] at index = [%d]\n", i,array[i]);
            break;


        }
    }
    return(i);
    
    
}