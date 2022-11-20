#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: pointer to a listint_t
 * @index :index
 * Return:1 or -1
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL, *next = NULL, *curr;
   for(curr = *head; curr != 0;)
   {  
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
   }
    return (prev);

}