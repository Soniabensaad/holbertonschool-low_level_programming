#include "lists.h"
void example(void) __attribute__ ((constructor));
/**
 * example - prints a sting before the main function
 * will be executated
 */
void example(void)
{
char *p;
p = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
printf("%s", p);
}
