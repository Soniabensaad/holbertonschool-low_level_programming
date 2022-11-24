#include "lists.h"
/**
 * sum_dlistint-  returns the sum of datalist.
 * @head: pointer to first node
 * Return: sum of data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *temp = *h;
    dlistint_t*new;
    unsigned int a = 0;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    temp->n = n;
    temp = *h;
    while (a < (idx -1))
    {
        temp = temp->next;
        a++;
    }
    new->prev = temp;
    new->next = temp->next;
    temp->next = new;
    new->next->prev = new;
    return(new);
    


    
    

}
