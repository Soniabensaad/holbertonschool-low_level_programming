#include "lists.h"
/**
 * insert_dnodeint_at_index-  inserts a new node at a given position
 * @h: pointer to first node
 * @idx:index
 * @n:data
 * Return: address of a new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *temp = *h;
unsigned int a = 0;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
temp = *h;
if (idx == 0)
{
if (*h)
{
new->next = *h;
(*h)->prev = new;
}
*h = new;
return (*h);
}
while (a < (idx - 1))
{
{
temp = temp->next;
a++;
}
}
if (temp)
{
if (temp->next)
{
temp->next->prev = new;
}
new->next = temp->next;
new->prev = temp;
temp->next = new;
return (new);
}
return (NULL);
}

