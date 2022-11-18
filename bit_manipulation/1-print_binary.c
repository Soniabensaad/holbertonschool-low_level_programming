#include "main.h"
#include <string.h>
/**
 * print_binary - converts a  number to binary
 * @n:int .
 * Return: binary
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
_putchar((n & 1) + '0');
}
