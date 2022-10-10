#include "main.h"
#include <stdio.h>
/**
 * swap_int -function that swaps the values of two integers
 *
 * @a:pointer of integer
 * @b:pointer of integer
 *
 * Description:swaps the values of two integers
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int t = *b;
*b = *a;
*a = t;
}
