#include "lists.h"
/**
* print_listint - print the elements of list
* @h: pointer to head of list
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
