#include "main.h"
#include <stdio.h>
/**
 * reverse_array-reverses the content of an array of integers
 *
 * @s:char
 *
 * Description:a function that reverses the content of an array of integers.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0;
int temp;
n = n - 1;
while (i < n)
{
    temp = *(a + i);
    *(a + i) = *(a + n);
    *(a + n) = temp;
    i++;
    n--;
}
}