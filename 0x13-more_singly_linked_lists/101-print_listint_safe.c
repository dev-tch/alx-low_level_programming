#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Head of the list
 * Return: Numbers of elements of the list
 **/
size_t print_listint_safe(const listint_t *head)
{
int i;
for (i = 0; head != NULL; i++)
{
head = head->next;
}
return (0);
}

