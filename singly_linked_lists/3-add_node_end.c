#include "lists.h"
/**
 * add_node_end - add a node at the end of list_t
 * @head: pointer to a list_t
 * @str: pointer of char
 * Return:NULL or adress of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
char *duplicated;
int len = 0;
list_t *p, *tp;

tp = malloc(sizeof(list_t));
if (tp == NULL)
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
tp->len = len;
tp->str = duplicated;
tp->next = NULL;
if (*head)
{
p = *head;
while (p->next != NULL)
{
p = p->next;
}
p->next = tp;
}
else
*head = tp;
return (tp);
}

