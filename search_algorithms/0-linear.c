#include "search_algos.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int linear_search(int *array, size_t size, int value)
{
   size_t i, j = 0;

    if (array == NULL)
    {
        return(-1);
    }
    
    for (i = 0; i <= size; i++)
    {
        if (j == size && array[i] != value)
        {
            return -1;
        }
        else if (array[i] != value)
        {
            
            printf("value  checked array[%ld] = [%d]\n", i, array[i]);
            j++;
        }
        else
        {
            printf("value  checked array[%ld] = [%d]\n", i, array[i]);
            break;
        }
    }
    return(i);
    
    
}