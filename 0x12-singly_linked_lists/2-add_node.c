#include "lists.h"
/**
* add_node - insert new node at the beginning of list
* @head: pointer to the nodes of list
* @str: string of new node
* Return: pointer to head of list
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
if (str != NULL)
{
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(new_node->str);
}
else
{
new_node->str = NULL;
new_node->len = 0;
}
if (head != NULL)
{
new_node->next = *head;
*head = new_node;
}
else
head = &new_node;
return (new_node);
}


