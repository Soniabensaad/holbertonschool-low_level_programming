#include "lists.h"
/**
 * add_nodeint- add node in the begining
 * @head: pointer to listint_t list
 * @n: integer
 * Return: adress of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *p;
p = malloc(sizeof(listint_t));
if (p == NULL)
{
return (NULL);
}
p->n = n;
p->next = *head;
*head = p;
return (p);
}
