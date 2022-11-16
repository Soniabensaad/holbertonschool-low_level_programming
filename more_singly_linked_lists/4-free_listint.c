#include "lists.h"
/**
 * free_listint - free listint_t
 * @head: pointer to a listint_t
 * Return:free list
 */
void free_listint(listint_t *head)
{
    listint_t *ptr;
    while (head)
    {
        ptr = head->next;
        free(head);
        head = ptr;
    }
}
