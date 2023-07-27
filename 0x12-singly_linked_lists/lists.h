#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct list list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
/**
 * struct list - list contains strings and its length
 * @str: string
 * @len: length of string
 * @next: pointer to next node in the list
 *
 * Description: Longer description
 */
struct list
{
char *str;
int len;
list_t *next;
};
#endif
