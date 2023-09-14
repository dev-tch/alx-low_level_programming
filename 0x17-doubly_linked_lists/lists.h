#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
typedef struct doublyLinkedList dlistint_t;
/**
 * struct doublyLinkedList - doubly linked list
 * @n: data node
 * @next: next adress node
 * @prev: previous adress node
 *
 * Description: list to save prev and next node
 */
struct doublyLinkedList
{
	int n;
	dlistint_t  *next;
	dlistint_t *prev;
};
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
#endif
