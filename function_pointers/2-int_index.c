#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array:  array
 * @size: size.
 * @action:pointer
 *
 * return ; no return
 */
int int_index(int *array, int size, int (*cmp)(int))
{int index = 0;
    if (array == NULL || cmp == NULL)
    {
        return (-1);
    }
    for (index = 0; index < size; index++)
    {
        if(cmp(array[index]) != 0)
        return (index);
    }
    return (-1);
   
}