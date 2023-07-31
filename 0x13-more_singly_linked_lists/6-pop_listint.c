#include "lists.h"
/**
* pop_listint - delete node from list
* @head: pointer to pointer of node
* Return: int
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;
if (head == NULL)
return (0);
if (*head == NULL)
return (0);
temp = (*head)->next;
data = (*head)->n;
free(*head);
*head = temp;
return (data);
}
