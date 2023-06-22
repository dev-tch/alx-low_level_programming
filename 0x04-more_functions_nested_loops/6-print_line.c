#include "main.h"
/**
 * print_line - print line with character _
 *@n: int param
 * Return: void
 */


void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0 ; i < n ; i++)
{
_putchar('_');
}
if (n > 0)
{
_putchar('\n');
}
}
