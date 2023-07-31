#include "lists.h"
/**
* listint_len - get number of elements in linkedlist
* @h: pointer to the head oflist
* Return: number of elelments
*/
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
