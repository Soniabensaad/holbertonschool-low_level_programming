#include "lists.h"
/**
 * add_dnodeint-  adds a new node at the beginning of a dlistint_t
 * @n:data
 * @head: pointer to first node
 * Return: address of node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *tmp;
    dlistint_t *tp;
    tmp = malloc(sizeof(dlistint_t));
    if (tmp ==NULL)
    {
        return (NULL);
    }
        tmp->prev = 0;
        tmp->n = n;
        tmp->next = 0;
    if (*head == NULL)
    {
        tmp = *head;
    }
    else
    {
        tp = *head;
        while(tp != NULL)
        {
            tp = tp->next;
        }
        tp->next = tmp;
        tmp->prev = tp;
    }
    return (tmp);
}
