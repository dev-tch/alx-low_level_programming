#include "lists.h"
/**
* get_nodeint_at_index - return the node at index
* @head: pointer to pointer of node
* @index: index of node
* Return: pointer to node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int i = 0;
if (head == NULL)
return (NULL);
temp = head;
while (temp != NULL && i < index)
{
temp = temp->next;
i++;
}
return (temp);
}
