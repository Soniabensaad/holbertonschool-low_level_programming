#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers.
 * @separator: pointer.
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list ptr;
    unsigned int i;
    va_start(ptr, n);
    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(ptr, int));
        if (separator != NULL && i < n - 1)
        {
            printf("%s", separator);
        }
    }
    printf("\n");
    va_end(ptr);
}
