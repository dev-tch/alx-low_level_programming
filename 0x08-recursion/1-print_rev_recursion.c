#include "main.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
char *bkp;

if (*s == '\0')
return;

bkp = s;
_print_rev_recursion((s + 1));
_putchar(*bkp);
}
