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
void array_iterator(int *array, size_t size, void (*action)(int))
{long unsigned int i = 0;
if (action &&  array)
{
        for (i = 0; i < size; i++)
        {
            action(*array);
            array++;
        }
    }
}
