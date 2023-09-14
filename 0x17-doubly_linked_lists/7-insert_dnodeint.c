#include "lists.h"
/**
* insert_dnodeint_at_index - insert node at position
* @h: list
* @idx: index
* @n: data to insert
* Return: ( new_node or NULL)
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{dlistint_t *new_node = NULL, *tmp = *h;
unsigned int i = 0;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);
new_node->n = n;
if (idx == 0)
{
	new_node->prev = NULL;
	new_node->next = *h;
	if (*h != NULL)
		(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
}
while (tmp != NULL)
{
	if (i == idx - 1)
	{
		new_node->prev = tmp;
		new_node->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = new_node;
		tmp->next = new_node;
		return (new_node);
	}
	tmp = tmp->next;
	i++;
}
free(new_node);
return (NULL);
}
