#include "lists.h"
/**
* add_node_end - add node at the the list
* @head: pointer of pointers contains the pointer to each node
*@str: string to be added at the new node
*Return: the adress of new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
if (str != NULL)
{
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
} /*if str!=NULL*/
else
{
new_node->str  = NULL;
new_node->len  = 0;
}
if (*head == NULL)
{
*head = new_node;
}
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
