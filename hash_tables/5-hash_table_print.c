#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_print- prints a hash table.
 * @ht: hashtable
 * Return: value and key
 */

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *a;
    unsigned long int i, j = 0;
    if (ht == NULL)
    {
        return;
    }
    printf("{");
    for (i = 0; ht && i < ht->size; i++)
    {
        a = ht->array[i];
        if (a != NULL)
        {
            if (j == 1)
            {
                printf(", ");
            }
        }
        if (a)
        {
            if (!a->next)
            {
                printf("'%s': '%s'", a->key, a->value);
                j = 1;
            }
            while (a)
            {
                j = 1;
                printf("'%s': '%s'", a->key, a->value);
                if (a->next)
                {
                    printf(", ");
                }
                a = a->next;
            }
        }
    }
    printf("}\n");
}
