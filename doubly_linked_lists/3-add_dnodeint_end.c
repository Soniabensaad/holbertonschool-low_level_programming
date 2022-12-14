#include "lists.h"
/**
 * add_dnodeint_end-   adds a new node at the end of a dlistint_t
 * @n:data
 * @head: pointer to first node
 * Return: address of node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *tmp;
    dlistint_t *tp;
    tmp = malloc(sizeof(dlistint_t));
    if (tmp == NULL)
    {
        return (NULL);
    }
    tmp->prev = 0;
    tmp->n = n;
    tmp->next = 0;
    if (*head == NULL)
    {
        *head = tmp;
    }
    else
    {
        tp = (*head);
        while (tp->next != NULL)
        {
            tp = tp->next;
        }
        tp->next = tmp;
        tmp->prev = tp;
    }
    return (tmp);
    
}
