#include "lists.h"
/**
 * delete_dnodeint_at_index-  deletes a new node at a given position
 * @index:index
 * @head:pointer to first node
 * Return: 1nor -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;
unsigned int a = 0;
if (*head == NULL)
{
return (-1);
}
tmp = *head;
if (index == 0)
{
*head = (*head)->next;
tmp->next->prev = 0;
free(tmp);
return (1);
}
while (a < (index))
{
tmp = tmp->next;
a++;
}
if (tmp == NULL)
{
return (-1);
}
tmp->prev->next = tmp->next;
tmp->next->prev = tmp->prev;
free(tmp);
return (1);
}
