#include "hash_tables.h"
#include <string.h>
/**
 * key_index- function that gives you the index of a key.
 * @size: size
 * @key: data
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int a, b;
a = hash_djb2(key);
b = a % size;
return (b);
}
