#include "lists.h"
/**
* free_list - empty linked list
* @head: pointer of pointers to nodes
*Return: void
*/
void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
