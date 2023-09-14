#include "lists.h"
/**
* delete_dnodeint_at_index - delete node at index
* @head: list
* @index: index to delete its node
* Return: (1 or -1)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp =  *head;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
	*head = (*head)->next;
	if ((*head) != NULL)
	{
		(*head)->prev = NULL;
	}
	free(tmp);
	return (1);
}
while (tmp != NULL)
{
	if (i == index)
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
		{
			tmp->next->prev = tmp->prev;
		}
		free(tmp);
		return (1);
	}
	tmp = tmp->next;
	i++;
}
return (-1);
}
