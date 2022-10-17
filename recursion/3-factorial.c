#include "main.h"

/**
 * factorial-returns returns the factorial of a given number.
 *
 *@s: char
 *
 *Description:a function that  returns the factorial of a given number.
 *
 * return 0
 */
int factorial(int n)
{
    if (n > 0)
    {
        return (n * factorial(n-1));
        

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
