#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: pointer to a listint_t
 * Return:NULL orthe sum of all(n) of a listint_t
 */
int sum_listint(listint_t *head)
{
listint_t *b = head;
int j = 0;
while (b != NULL)
{
j += b->n;
b = b->next;
}
return (j);
}
