#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
    size_t step, jumpy, j;
    if (array == NULL || size == 0)
    {
        return (-1);
    }
    step = sqrt(size);
    for (j = jumpy = 0; jumpy < size && array[jumpy] < value ;)
    {
        printf("Value checked array[%ld] = [%d]\n", jumpy, array[jumpy]);
        j = jumpy;
        jumpy += step;
    }
    printf("Value found between indexes [%ld] and [%ld]\n", j, jumpy);
    if (jumpy >= size - 1) 
    {
        jumpy = size - 1;
    }
    for (; j < jumpy && array[j] < value; j++)
    {
        printf("Value checked array[%ld] = [%d]\n", j, array[j]);
    }
    printf("Value checked array[%ld] = [%d]\n", j, array[j]);
    if (array[j] == value)
    {
        return (value);
    }
    else
    {
        return (-1);
    }
}