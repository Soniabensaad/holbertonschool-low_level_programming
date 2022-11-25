#include "hash_tables.h"
/**
 * hash_table_delete- deletes a hash table.
 * @ht: hashtable
 * Return: free
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *new, *tmp;
unsigned long int i;
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
new = ht->array[i];
if (new == NULL)
{
free(new->value);
free(new->key);
free(new);
}
while (new != NULL)
{
tmp = new->next;
free(new->value);
free(new->key);
free(new);
new = tmp;
}
}
ht->array[i] = NULL;
}
free(ht->array);
free(ht);
}
