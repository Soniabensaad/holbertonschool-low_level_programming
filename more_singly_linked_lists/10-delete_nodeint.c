#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: pointer to a listint_t
 * @index :index
 * Return:1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *tmp = *head;
    listint_t *node;
    unsigned int i = 1;
    if (!head || *head == NULL)
    {
        return (-1);
    }
    if (index == 0)
    {
        *head = tmp->next;
        free(tmp);
        tmp = NULL;
        return (1);
    }
    if (index == 1)
    {
        tmp = (*head)->next;
        (*head)->next = tmp->next;
        free(tmp);
        tmp = NULL;
        return (1);
    }
    while (i < index - 1)
    {
        tmp = tmp->next;
        i++;
    }
    node = tmp->next;
    tmp->next = node->next;
    free(node);
    node = NULL;
    return (1);
}
