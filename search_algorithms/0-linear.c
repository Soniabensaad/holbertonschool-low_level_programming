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
size_t i, j = 0;

if (array == NULL)
{
return (-1);
}
for (i = 0; i <= size; i++)
{
if (array[i] != value && j == size)
{
return (-1);
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
return (i);
}
