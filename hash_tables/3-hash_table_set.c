#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set-  adds an element to the hash table.
 * @value: value
 * @key: data
 * @ht: hashtable
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node;
hash_node_t *temp;
unsigned int idx;
if (ht == NULL || strlen(key) == 0)
{
return (0);
}
idx = key_index((const unsigned char *) key, ht->size);
temp = ht->array[idx];
if (ht->array[idx] == NULL)
{
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}
new_node->key = strdup((char *)key);
new_node->value = strdup((char *)value);
new_node->next = NULL;
ht->array[idx] = new_node;
return (1);
}
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup((char *)value);
return (1);
}
temp = temp->next;
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}
new_node->key = strdup((char *)key);
new_node->value = strdup((char *)value);
new_node->next = ht->array[idx];
ht->array[idx] = new_node;
return (1);
}
