#include "main.h"
/**
 * print_diagonal - diagonal $ symbol
 * @n: int
 * Return: void
 */

void print_diagonal(int n)
{
int i = 0;
int j;
if (n <= 0)
{
_putchar('\n');
}
if (n > 0)
{
while (i < n)
{
for (j = 0  ; j < i ; j++)
{
_putchar(32);
} /*for*/
_putchar(92);
_putchar('\n');
i++;
} /*while*/
} /*if*/
} /*function*/
