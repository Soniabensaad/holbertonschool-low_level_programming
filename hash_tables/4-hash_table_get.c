#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get- retrieves a value associated with a key.
 * @key: data
 * @ht: hashtable
 * Return: 1 or 0
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *match;
    unsigned int idx;
    if (ht == NULL || strlen(key) == 0)
    {
        return (0);
    }
    idx = key_index((const unsigned char *)key, ht->size);
    match = ht->array[idx];
    while (match)
    {
        if (strcmp(match->key, key) == 0)
        {
            return (match->key);
        }
        match = match->next;
    }
    return (NULL);
}
