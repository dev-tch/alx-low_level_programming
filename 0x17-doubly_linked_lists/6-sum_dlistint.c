#include "lists.h"
/**
*sum_dlistint - sum all data of list
* @head: list
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp = head;
int sum = 0;
if (head == NULL)
return (0);
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
