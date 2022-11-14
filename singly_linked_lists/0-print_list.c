#include "lists.h"
/**
 * print_list - prints node lists
 * @h: pointer to a list
 * Return:number of nodes
 */
size_t print_list(const list_t *h)
{
size_t c = 0;
while (h)
{
if (h->str)
{
printf("[%d]%s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
c++;
}
return (c);
}
