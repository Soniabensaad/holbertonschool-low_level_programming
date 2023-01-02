#include "search_algos.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int linear_search(int *array, size_t size, int value)
{
   int i = 0;

    if (array == NULL)
    {
        return(-1);
    }
    
    while (i < (int(size)))
    {
        if (array[i] == value)
        {
            printf("value  checked array[%ld] = [%d]\n", i, array[i]);
            return(i);
            
        }
        else
        {
            printf("value  checked array[%ld] = [%d]\n", i, array[i]);
        }
        i++;
        
    }
    return (-1);
    
    
}