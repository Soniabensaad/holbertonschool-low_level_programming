#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name:  name that will be printed
 * @f: A pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
