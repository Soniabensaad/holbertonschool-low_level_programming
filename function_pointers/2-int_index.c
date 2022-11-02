#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer.
 * @int_index: returns the index of the first element of array
 * @array:  array
 * @size: size.
 * @cmp:pointer
 *
 * return : 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{int index = 0;
if (array == NULL || cmp == NULL)
{
return (-1);
}
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
