#include "main.h"
#include <string.h>
/**
 * flip_bits:  returns the number of bits to flip from n to another
 * @n:unsigned int .
 * @m: unsigned int
 * Return:  number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int c = 0;

	flip = n ^ m;

	while (flip != 0)
	{
		if ((flip & 1) == 1)
			c++;
		flip = flip >> 1;
	}
	return (c);
}
