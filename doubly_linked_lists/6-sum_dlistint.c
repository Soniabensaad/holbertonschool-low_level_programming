#include "lists.h"
/**
 * sum_dlistint-  returns the sum of datalist.
 * @head: pointer to first node
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *tmp;
tmp = head;
while (tmp)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
