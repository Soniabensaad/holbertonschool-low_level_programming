#include "lists.h"
/**
 * add_node - add a node at the begining of list_t
 * @head: pointer to a list_t
 * @str: pointer of char 
 * Return:NULL or adress of new node
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
