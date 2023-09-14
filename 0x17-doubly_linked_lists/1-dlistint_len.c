#include "lists.h"
/**
* dlistint_len - return nb nodes
* @h: list
* Return: (nb nodes)
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t nb_el = 0;
while (temp != NULL)
{
nb_el++;
temp = temp->next;
}
return (nb_el);
}
