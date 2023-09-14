#include "lists.h"
/**
* add_dnodeint_end - add node at end in doubly linked list
* @head: head of list
* @n: data of new node
* Return: the added node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = *head;
dlistint_t *prev = NULL;
dlistint_t *new_node = NULL;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (*head == NULL)
{
*head = new_node;
new_node->prev = NULL;
new_node->next = NULL;
}
else
{
	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;
	}
	new_node->prev = prev;
	new_node->next = NULL;
	prev->next = new_node;
}
return (new_node);
}
