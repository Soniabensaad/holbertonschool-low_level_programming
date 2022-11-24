#include "lists.h"
/**
 * sum_dlistint-  returns the sum of datalist.
 * @head: pointer to first node
 * Return: sum of data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

    dlistint_t*new;
    dlistint_t *temp = *h;
    unsigned int a = 0;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    temp->n = n;
    temp = *h;
    if (idx == 0)
    {
        new->next = *h;
        (*h)->prev = new;
        *h = new;
    }
    while (a < (idx -1))
    {
        temp = temp->next;
        a++;
    }
    if(temp)
    {
        if(temp->next)
        {
            temp->next->prev = new;
        }
        new->prev = temp;
        new->next = temp->next;
        temp->next = new;
       
        
    }
    
    return(new);
    


    
    

}
