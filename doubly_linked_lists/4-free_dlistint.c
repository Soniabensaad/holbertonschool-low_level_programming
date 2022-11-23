#include "lists.h"
/**
 * add_dnodeint_end-   adds a new node at the end of a dlistint_t
 * @n:data
 * @head: pointer to first node
 * Return: address of node
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;
    while (head)
    {
        tmp = head;
        head = head->next;
        free (tmp);
    }
    
}
