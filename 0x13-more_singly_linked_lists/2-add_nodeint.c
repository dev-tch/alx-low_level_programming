#include "lists.h"
/**
* add_nodeint - add node to end of list
* @head: pointer to pointers of nodes
* @n: content of new node
* Return: new node added
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
/*create new node*/
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (head == NULL)
*head = new_node;
else
{
new_node->next = *head;
*head = new_node;
}
return (new_node);
}
