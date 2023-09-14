#include "lists.h"
/**
* get_dnodeint_at_index - return node at index
* @head: list
* @index: position of node to be returned
* Return: node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp = head;
dlistint_t *node = NULL;

if (head == NULL)
	return (NULL);
else
{
	while (tmp != NULL)
	{
		if (i == index)
		{
			node = tmp;
			break;
		}
		tmp = tmp->next;
	}
}
return (node);
}
