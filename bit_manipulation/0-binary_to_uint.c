#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: const char
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
    int j;
    unsigned int result = 0;
    unsigned int r = 1;
    unsigned int length;
    if (!b)
    {
        return (0);
    }
    length = strlen(b);
    for (j = length - 1; j >= 0; j--)
    {
        if (b[j] != '0' && b[j] != '1')
        {
            return (0);
        }
        if (b[j] == '1')
        {
            result = result + r;
        }
        r = r * 2;
    }
    return (result);
}
