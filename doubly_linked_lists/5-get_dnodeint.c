#include "lists.h"
/**
 * get_dnodeint_at_index-  returns the nth node of a dlistint_t linked list
 * @head: pointer to first node
 * @index: index of the node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int a = 0;
    dlistint_t *tmp;
    tmp = head;
    while (a < index)
    {
        if (!tmp)
        {
            return (NULL);
        }
        tmp = tmp->next;
        a++;
    }
    return (tmp);
}
