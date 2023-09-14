#include "lists.h"
/**
* add_dnodeint - add node at first in doubly linked list
* @head: head of list
* @n: data of new node
* Return: the added node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = NULL;
dlistint_t *temp = *head;
dlistint_t *prev = NULL;
new_node = malloc(sizeof(dlistint_t));
/*malloc failed*/
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (head == NULL)
{
new_node->prev = NULL;
*head = new_node;
new_node->next = NULL;
}
else
{
	*head = new_node;
	new_node->prev = NULL;
	new_node->next = temp;
	prev = new_node;
	while (temp != NULL)
	{
		temp->prev = prev;
		prev = temp;
		temp = temp->next;
	}
}
return (new_node);
}
