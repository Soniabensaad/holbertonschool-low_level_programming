#include "main.h"
#include <string.h>
/**
 * clear_bit-  sets the value of a bit to 0 at a given index.
 * @index:index
 * @n:int .
 * Return:  -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
{
return (-1);
}
else
{
*n = *n & ~(1 << index);
return (1);
}
}
