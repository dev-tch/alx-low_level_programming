#include "lists.h"
/**
* insert_nodeint_at_index - insertion node at index
* @head: pointer to pointer of node
* @idx: index
* @n: content of new node to insert
* Return: the new node inserted
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *new_node;
unsigned int i = 0;

new_node = malloc(sizeof(listint_t));
/*check if malloc failed*/
if (new_node == NULL)
	return (NULL);
new_node->n = n;
if (*head == NULL)
{
	if (idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	else
		*head = new_node;

}
else if (idx == 0)
{
	new_node->next = *head;
	*head = new_node;
}
else
{       temp = *head;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
}
	return (new_node);
}
