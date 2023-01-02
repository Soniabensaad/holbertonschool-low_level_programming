#include "search_algos.h"
/**
 * linear_search -  searches for a value in an array
 *@array: array of integer
 *@size: size of array
 *@value: value of array
 * Return: value
 */
int linear_search(int *array, size_t size, int value)
{
   size_t j;

	for (j = 0; j < size; i++)
    
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[j]);
        if (array[j] == value)
        {
			return (j);
        }
        
	}

	return (-1);
}
