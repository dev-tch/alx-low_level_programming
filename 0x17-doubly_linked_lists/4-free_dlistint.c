#include "lists.h"
/**
* free_dlistint - free list
* @head: list
* Return: void
**/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = NULL;
if (head == NULL)
return;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
