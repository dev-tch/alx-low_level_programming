#include "lists.h"
/**
* sum_listint - sum of all data of nodes
* @head: pointer to node
* Return: sum of data
*/
int sum_listint(listint_t *head)
{
int sum = 0;
int data_current_node = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
data_current_node = head->n;
sum += data_current_node;
head = head->next;
}
return (sum);
}
