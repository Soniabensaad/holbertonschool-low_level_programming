#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: pointer to a listint_t
 * @index : unsigned int
 * Return:NULL or returns the nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *a;
    a = head;
    for (i = 0; a != NULL; i++)
    {
        if (i == index)
        {
            return (a);
        }
        a = a->next;
    }
    return (NULL);
}
