#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Head of the list
 * Return: Numbers of elements of the list
 **/
size_t print_listint_safe(const listint_t *head)
{
size_t nb_nodes = 0;
int  cycle_detected = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
printf("[%p] %d\n", (void *) head, head->n);
nb_nodes++;
if (head <= head->next)
{
cycle_detected = 1;
break;
}
head = head->next;
}
if (cycle_detected)
{
head = head->next;
printf("-> [%p] %d\n", (void *) head, head->n);
nb_nodes++;
exit(98);
}
return (nb_nodes);
}

