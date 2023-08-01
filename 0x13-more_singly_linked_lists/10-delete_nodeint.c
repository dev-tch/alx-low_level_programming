#include "lists.h"
/**
* delete_nodeint_at_index - delete node at index
* @head: pointer to the pointer of node
* @index: index to delete
* Return: 1(succeeded) , -1(failed)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
listint_t *prev;
unsigned int i = 0;

if (head == NULL)
return (-1);
if (*head == NULL)
return (-1);
/*init*/
temp = *head;
prev = NULL;
while (temp != NULL && i < index)
{
prev = temp;
temp = temp->next;
i++;
}
if (temp == NULL)
return (-1);
if (prev == NULL)
{
*head = temp->next;
}
else
{
prev->next = temp->next;
}
free(temp);

return (1);
}
