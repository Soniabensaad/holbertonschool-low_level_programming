#include "lists.h"
/**
 * listint_len- number of elements of a listint_t
 * @h: pointer to listint_t list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
