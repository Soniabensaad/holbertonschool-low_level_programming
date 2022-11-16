#include "lists.h"
/**
 * free_listint2 - free listint_t from head to null
 * @head: pointer to a listint_t
 * Return:free list
 */
void free_listint2(listint_t **head)
{
    listint_t *old;
    listint_t *new;
    while (!head)
    {
        return;
    }
    old = *head;
    new = (*head)->next;
    while (new)
    {
        free(old);
        old = new;
        new = new->next;
    }
    free(old);
    *head = NULL;
}
