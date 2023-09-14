#include "lists.h"
/**
* insert_dnodeint_at_index - insert node at position
* @h: list
* @idx: index
* @n: data to insert
* Return: ( new_node or NULL)
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{dlistint_t *new_node = NULL, *tmp = *h, *next_node = NULL;
unsigned int flag = 0, i = 0;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);
new_node->n = n;
if (h == NULL)
{
	if (idx != 0)
	{
		free(new_node);
		return (NULL);
	}
	*h = new_node;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}
while (tmp != NULL)
{
	if (i == idx - 1)
	{
		new_node->prev = tmp;
		new_node->next = tmp->next;
		next_node = tmp->next;
		tmp->next = new_node;
		if (next_node != NULL)
			next_node->prev = new_node;
		flag = 1;
			break;
	}
	tmp = tmp->next;
	i++;
}
if (flag == 0)
{
	free(new_node);
	return (NULL);
} else
	return (new_node);
}
