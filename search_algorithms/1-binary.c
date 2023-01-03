#include "search_algos.h"
/**
 * linear_search -  searches for a value in an array
 *@array: array of integer
 *@size: size of array
 *@value: value of array
 * Return: value
 */
void print_arr(int *array, int start, int end)
{

    printf("Searching in array : ");
    for (; start <= end; start++)
    {
        printf("%d", array[start]);
        if (start != end)
        {
            printf(", ");
        }
    }
    printf("\n");
}
int binary_search(int *array, size_t size, int value)
{
    int low ;
    int high ;
    int middle;
    if (array == NULL)
    {
        return (-1);
    }
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        print_arr(array, low, high);
    
        if (array[middle] == value)
        {
            return (value);
        }
        else if (array[middle] > value)
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1 ;
        }
    }
    return (-1);


}