#include "lists.h"
/**
* free_listint - free list
* @head: pointer to node
* Return: void
*/
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head;
head = temp->next;
free(temp);
}
}
