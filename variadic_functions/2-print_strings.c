#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings.
 * @separator: pointer.
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
s = va_arg(ptr, char*);
if (s)
{
printf("%s", s);
}
else
{
printf("nil");
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ptr);
}
