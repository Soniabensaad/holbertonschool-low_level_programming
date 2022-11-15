#include "lists.h"
/**
 * print_listint- prints all the elements of a listint_t
 * @h: pointer to listint_t
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
