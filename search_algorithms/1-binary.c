#include "search_algos.h"
/**
 * linear_search -  searches for a value in an array
 *@array: array of integer
 *@size: size of array
 *@value: value of array
 * Return: value
 */
void pray(int *array, int l, int r)
{
	printf("Searching in array: ");
	for (; l <= r; l++)
	{
		printf("%d", array[l]);
		if (l != r)
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
	int l, r, m;

	if (array == NULL)
		return (-1);

	l = 0;
	r = (int)size - 1;
	while (l <= r)
	{
		m = (l + r) / 2;
		pray(array, l, r);
		/**printf("array[%d]: %d\n", m, array[m]);*/
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
		{
			return (m);
		}
	}
	/**pray(array, l, r);*/

	return (-1);
}