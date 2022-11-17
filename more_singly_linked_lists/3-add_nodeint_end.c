#include "lists.h"
/**
 * add_nodeint_end- add a node at the end of listint_t
 * @head: pointer to a list_t
 * @n: integer
 * Return:NULL or adress of new node in the end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

    listint_t *p, *tp;

    tp = malloc(sizeof(listint_t));
    if (tp == NULL)
    {
        return (NULL);
    }
    tp->n = n;
    tp->next = NULL;
    if (*head)
    {
        p = *head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tp;
    }
    else
        *head = tp;
    return (tp);
}
