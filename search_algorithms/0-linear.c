#include "search_algos.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int linear_search(int *array, size_t size, int value)
{
    long unsigned int i;

    if (array == NULL)
    {
        return(-1);
    }
    
    for (i = 0; i <= size; i++)
    {
        if (array[i] == value)
        {
            printf("Found [%ld] at index = [%d]\n", i,array[i]);
            break;

            
        
        }
        else
        {
            if (i == size && array[i] != value)
            {
                printf("not found");
                return -1;
            }
        }
    }
    return(i);
    
    
}