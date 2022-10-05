#include "main.h"
#include <stdio.h>
/**
* print_to_98 - check the code for Holberton School students.
* @n: integer
*
*/
void print_to_98(int n)
{
for ( ; n < 98; n++)
printf("%d, ", n);
for ( ; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
