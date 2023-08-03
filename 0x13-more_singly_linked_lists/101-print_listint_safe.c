#include "lists.h"
/**
 * print_listint_safe - Prints nodes of list
 * @head: pointer to first node
 * Return: Numbers of elements of the list
 **/
size_t print_listint_safe(const listint_t *head)
{
int i;
const listint_t *temp;
temp = head;
for (i = 0; temp != NULL; i++)
{
temp = temp->next;
}
return (0);
}

