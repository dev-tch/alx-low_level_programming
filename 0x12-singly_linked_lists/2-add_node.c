#include "lists.h"
/**
* add_node - insert new node at the beginning of list
* @head: pointer to the nodes of list
* @str: string of new node
* Return: pointer to head of list
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
if (str != NULL)
{
new->str = strdup(str);
new->len = strlen(new->str);
}
else
{
new->str = NULL;
new->len = 0;
}
if (head != NULL)
{
new->next = *head;
*head = new;
}
else
head = &new;
return (new);
}


