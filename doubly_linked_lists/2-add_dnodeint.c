#include "lists.h"
/**
 * dlistint_len-  returns the number of elements in a linked dlistint_t list
 *@h: a node pointer to head
 * Return: number of element of alist
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    
    dlistint_t *newnode;

    newnode = malloc(sizeof(dlistint_t));
    if (newnode == NULL)
    {
        return (NULL);
    }
    newnode->prev = 0;
    newnode->n = n;
    newnode->next = 0;
    newnode->next = *head;
    (*head)->prev = newnode;
    (*head) = newnode;
    return (newnode);
    
}
