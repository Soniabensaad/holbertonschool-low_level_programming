#include "lists.h"
/**
 * reverse_listint- reverse linked list
 * @head: pointer to a listint_t
 * Return:node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL, *curr;
for (curr = *head; curr != 0;)
{
next = curr->next;
curr->next = prev;
prev = curr;
curr = next;
}
return (prev);
}
