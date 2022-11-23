#include "lists.h"
/**
 * dlistint_len-  returns the number of elements in a linked dlistint_t list
 *@h: a node pointer to head
 * Return: number of element of alist
 */
size_t dlistint_len(const dlistint_t *h)
{
    int count = 0;
    while (h)
    {
        h = h->next;
        count++;
    }
    return (count);
}
