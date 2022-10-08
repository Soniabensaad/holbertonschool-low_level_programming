#include "main.h"
#include <stdio.h>
/**
 * prime_factor  - prints the largest prime factor number
 *
 * @n:integer
 *
 * Description:prints the largest prime factor number
 *
 * Return 0
 */

int main()
{
    long int i, a, b;
    a = 612852475143;

    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            if (a == i)
            {
                printf("%ld\n", i);
                break;
            }
            b = a / i;
            a = b;
            i = 1;
        }
    }
    return (0);
}
