#include "lists.h"
/**
*add_nodeint_end - add node at end of list
* @head: pointer to pointers of nodes
* @n: content of node
* Return: new node added
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *temp;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
/*init*/
new_node->n = n;
if (*head == NULL)
*head = new_node;
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}
return (new_node);
}
