#include "lists.h"
/**
 * list_len - prints number of nodes
 * @h: pointer to a list
 * Return:number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
    char *duplicated;
    int len = 0;
    list_t *p;

    p = malloc(sizeof(list_t));
    
    if (p == NULL)
    {
        return (NULL);
    }
    if (str == NULL)
    {
        return (NULL);
    }
    while (str[len] != '\0')
    {
        len++;
    }
    duplicated = strdup(str);
    p->len = len;
    p->str = duplicated;
    p->next = *head;
    *head = p;
    return (p);
}