#include "lists.h"
/**
 * free_dlistint-  function that frees a dlistint_t list
 * @head: pointer to first node
 * Return: free a list
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
