#include "main.h"
/**
 * prime_check - returns 1 if the input integer is a prime
 *
 *@i: counter
 *@n:integer
 *
 *Description: returns 1 if the input integer is a prime
 *
 * Return: 1 or 0
 */
int prime_check(int n, int i)
{
if (n == 1)
{
return (0);
}
if (i > n)
{
return (0);
}
if (n == i)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (prime_check(n, i + 1));
}

/**
 * is_prime_number - Entry point
 *
 * @n : integer
 *
 * Description:  returns 1 if the input integer is a prime number.
 *
 * Return: integer
 */
int is_prime_number(int n)
{
return (prime_check(n, 2));
}
