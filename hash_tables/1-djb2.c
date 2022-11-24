#include "hash_tables.h"
#include <string.h>

/**
 * hash_djb2- hash function to the djb2 algorithm.
 * @str: string
 * Return:  hash function
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long hash = 5381;
int a;
while ((a = *str++))
{
hash = ((hash << 5) + hash) +a;
}
return (hash);
}
