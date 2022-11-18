#include "main.h"
#include <string.h>
/**
 * get_bit-  returns the value of a bit at a given index.
 * @index:index
 * @n:int .
 * Return:  value  of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
{
return (-1);
}
index = (n >> index) &1;
{
return (index);
}
}
