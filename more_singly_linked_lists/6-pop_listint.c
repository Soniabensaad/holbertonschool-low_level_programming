#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to a listint_t
 * Return:0 or the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
int a;
listint_t *ptr = *head;
if (!ptr)
{
return (0);
}
else
{
a = (*head)->n;
*head = ptr->next;
free(ptr);
}
return (a);
}
