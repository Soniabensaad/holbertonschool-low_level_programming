#include "search_algos.h"
/**
 * minimal - returns minumum
 *@x: integer
 *@y: integer
 * Return:minimal between two integers.
 */
int minimal(int x, int y)
{
if (x < y)
{
return (x);
}
else
{
return (y);
}
}
/**
 * _bin_search - binary search function
 *@array: array of integer
 *@low: start of array
 *@high: end of array
 *@value: value of array
 * Return: value
 */
int _bin_search(int *array, size_t low, size_t high, int value)
{
size_t i = 0, middle;
if (array == NULL)
{
return (-1);
}
if (low > high)
{
return (-1);
}
while (low <= high)
{
printf("Searching in array: ");
for (i = low; i < high; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);
middle = (low + high) / 2;
if (array[middle] == value)
{
return (middle);
}
else if (array[middle] > value)
{
return (_bin_search(array, low, middle - 1, value));
}
else
{
return (_bin_search(array, middle + 1, high, value));
}
}
return (-1);
/**
 * exponential_search - value using exponential algorithm
 *@array: array of integer
 *@size: size of array
 *@value: value of array
 * Return: value
 */
}
int exponential_search(int *array, size_t size, int value)
{
size_t j, right;
if (array == NULL)
{
return (-1);
}
if (array[0] != value)
{
for (j = 1; j < size && array[j] <= value; j = j * 2)
{
printf("Value checked array[%ld] = [%d]\n", j, array[j]);
}
}
if (j < size)
{
right = j;
}
else
{
right = size - 1;
}
printf("Value found between indexes [%ld] and [%ld]\n", j / 2, right);
return (_bin_search(array, j / 2, minimal(j, right), value));
}
