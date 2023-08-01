#include "lists.h"
/**
* reverse_listint - rverse nodes of list
* @head: pointer to pointer of node
* Return: the first pointer to the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
