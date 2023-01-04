#include "search_algos.h"
/**
 * interpolation_search -  searches for a value using interpolation algorithm
 *@array: array of integer
 *@size: size of array
 *@value: value of array
 * Return: value
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low, high, pos;
    low = 0;
    high = size - 1;
    if (array == NULL)
    {
        return (-1);
    }
    
    while (low <= high && array[low] <= value && array[high] >= value)
    {
        
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        if (pos < size)
        {
            printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
        }
        else
        {
            printf("Value checked array[%ld] is out of the range\n", pos);
            break;
        }
        
        if (array[pos] == value)
        {
            return (pos);
        }
        else if (array[pos] < value)
        {
            low = pos + 1;
        }
        else
        {
            high = pos - 1;
        }

    }
    return (-1);
}