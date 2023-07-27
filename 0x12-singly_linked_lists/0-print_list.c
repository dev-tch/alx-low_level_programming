#include "lists.h"
/**
* print_list - print the nodes of list
* @h: pointer to first elment in list (HEAD)
* Return: number of elmements in list
*/
size_t print_list(const list_t *h)
{
int nb_nodes = 0;
while (h != NULL)
{
nb_nodes++;
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
} /*while loop*/
return (nb_nodes);
}
