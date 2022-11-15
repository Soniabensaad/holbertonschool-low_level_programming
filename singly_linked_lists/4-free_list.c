#include "lists.h"
/**
 * free_list - free list_t
 * @head: pointer to a list_t

 * Return:NULL or adress of new node
 */
void free_list(list_t *head)
{
list_t *ptr;
while (head)
{
ptr = head->next;
free(head->str);
free(head);
head = ptr;
}
}
