#include "lists.h"
/**
 * add_dnodeint-  adds a new node at the beginning of a dlistint_t
 * @n:data
 * @head: pointer to first node
 * Return: address of node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newnode;
    newnode = malloc(sizeof(dlistint_t));
    if (newnode == NULL)
    {
        return (NULL);
    }
    if (*head == NULL)
    {
        newnode->prev = 0;
        newnode->n = n;
        newnode->next = 0;
        *head = newnode;
    }
    else
    {
        newnode->prev = 0;
        newnode->n = n;
        newnode->next = *head;
        (*head)->prev = newnode;
        (*head) = newnode;
    }
    return (*head);
}
