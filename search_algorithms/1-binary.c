#include "search_algos.h"
/**
* print_arr- prints an array
* @array: Array to search
* @start: pointer to the start of array
* @end: pointer to the end ofarray
* Return: array in specific way
*/
void print_arr(int *array, int start, int end)
{
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		printf("%d", array[start]);
		if (start != end)
			printf(", ");
	}
	printf("\n");
}


/**
* binary_search - bineary search algorithm
* @array: Array to search
* @size: Size of array
* @value: Value to search for, -1 if not found
* Return: Index where value
*/

int binary_search(int *array, size_t size, int value)
{
	int low, high, middle;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		middle = (low + high) / 2;
		print_arr(array, low, high);
		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			high = middle - 1;
		else
		{
			return (middle);
		}
	}

	return (-1);
}
