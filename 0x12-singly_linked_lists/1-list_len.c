#include "lists.h"
/**
* list_len - calculates the number of elemnts in linked list
* @h: pointer to head  of list
* Return: size of list
*/
size_t list_len(const list_t *h)
{
int nb = 0;
while (h != NULL)
{
nb++;
if (h->next == NULL)
break;
else
h = h->next;
}
return (nb);
}
