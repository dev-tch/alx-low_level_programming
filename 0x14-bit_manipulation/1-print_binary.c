#include "main.h"
/**
* print_binary - format number n  with binary system
* @n: number to convert to binary
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned long int len = 0;
int  i = 0, head_with_zero = 1;
unsigned long  mask;

len = sizeof(n) * 8;
for (i = len - 1 ; i >= 0 ; i--)
{
mask = 1UL << i;
if (n & mask)
{
_putchar('1');
head_with_zero = 0;
}
else if (i == 0)
{
_putchar('0');
}
else if (!head_with_zero)
{
_putchar('0');
}
}
}
