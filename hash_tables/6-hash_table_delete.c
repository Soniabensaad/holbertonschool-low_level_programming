#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_print- prints a hash table.
 * @ht: hashtable
 * Return: value and key
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *new;
    hash_node_t *tmp;
    unsigned long int i;
    if (ht == NULL)
    {
        return;
    }
    for(i = 0; i < ht->size; i++)
    {
        new = ht->array[i];
        
            while(new)
            {
                 new = ht->array[i];
                tmp = new->next;
                free(tmp->value);
                free(tmp->key);
                free(tmp);
                new = tmp;
            }
            ht->array[i] = NULL;

        
    }
    free(ht->array);
    free(ht);
}
