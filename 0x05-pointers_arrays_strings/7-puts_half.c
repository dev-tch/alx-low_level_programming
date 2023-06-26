#include "main.h"
/**
 * puts_half - print half of string
 *@str: pointer to str
 * Return: void
 */

void puts_half(char *str)
{
int len = 0;
char *last = str;
char *first = str;
while (*last)
{
last++;
len++;
}
last--;
if (len % 2 == 0)
first = first + (len / 2);
else
first = first + (len / 2) + 1;
while (first <= last)
{
_putchar(*first);
first++;
}
_putchar('\n');
}
