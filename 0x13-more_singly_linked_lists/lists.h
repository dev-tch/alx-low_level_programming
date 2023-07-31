#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
typedef struct list listint_t;
size_t print_listint(const listint_t *h);
/**
 * struct list - list of integers
 * @n: number
 * @next: address of next node
 */
struct list
{
	int n;
	listint_t *next;
};
#endif
