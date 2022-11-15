#include "lists.h"
/**
 * print_len - prints number of nodes
 * @h: pointer to a list
 * Return:number of nodes
 */
size_t list_len(const list_t *h)
{
    size_t c = 0;
    while (h)
    {
        h = h ->next;
        c++;
    }
    return (c);
}