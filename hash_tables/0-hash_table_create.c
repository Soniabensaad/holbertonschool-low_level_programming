#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_create-  creates a hash table.
 * @size: size
 * Return:  adress of a new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new;
if (size == 0)
{
return (NULL);
}
new = malloc(sizeof(hash_table_t));
if (new == NULL)
{
return (NULL);
}
new->size = size;
new->array = malloc(sizeof(hash_table_t));
if (new->array == NULL)
{
return (NULL);
}
memset(new->array, 0, sizeof(hash_table_t));
return (new);
}
