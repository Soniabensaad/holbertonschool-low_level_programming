#include "main.h"
/**
 * sqrt_check - checks for the square verify of c
 * @a:guess at sqrt
 * @b: number to find sqrt of
 *
 *Description: checks for the square verify of c
 *
 * Return: -1 or sqrt of b
 */
int sqrt_verify(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_verify(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_verify(1, n));
}
