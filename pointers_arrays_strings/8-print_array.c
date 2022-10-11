#include "main.h"
#include <stdio.h>
/**
 * print_array -prints n elements of an array of integers
 *
 * @str:char
 *
 * Description:  a function that prints n elements of an array of integers
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            printf("%d", *a);
        }
        else
        {
            printf("%d, ", *a);
            a++;
        }
    }
    printf("\n");
}
