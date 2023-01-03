#include "search_algos.h"
/**
 * linear_search -  searches for a value in an array
 *@array: array of integer
 *@size: size of array
 *@value: value of array
 * Return: value
 */
void print_arr(int *array, int s, int e)
{

    printf("Searching in array : ");
    for (; s <= e; s++)
    {
        printf("%d", array[s]);
        if (s != e)
        {
            printf(", ");
        }
    }
    printf("\n");
}
int binary_search(int *array, size_t size, int value)
{
    int l ;
    int h ;
    int m;
    if (array == NULL)
    {
        return (-1);
    }
    l = 0;
    h = (int)size - 1;
    while (l <= h)
    {
        middle = (l + h) / 2;
        print_arr(array, l, h);
    
        if (array[m] < value)
        {
            l = m + 1 ;
        }
        else if (array[m] > value)
        {
            h = m - 1;
        }
        else
        {
           return(m);
        }
    }
    return (-1);


}