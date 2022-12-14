#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98.
*
* @n: integer
*
* Description:prints all natural numbers
*
* return : always 0 
*/
void print_to_98(int n)
{
int n;
for ( ; n < 98; n++)
_putchar("%d, ", n);
for ( ; n > 98; n--)
_putchar("%d, ", n);
_putchar("%d ", 98);
_putchar("\n");
}
