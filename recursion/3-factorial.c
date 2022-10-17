#include "main.h"

/**
 * factorial-returns returns the factorial of a given number.
 *
 *@n: integer
 *
 *Description:a function that  returns the factorial of a given number.
 *
 * return: int
 */
int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n < 0)
{
return (-1);
}
else
{
return (1);
}
}

