#include "main.h"
/**
 * print_last_digit - get unit of number
 *@n: number
 * Return: number
 */

int print_last_digit(int n)
{
long lnb = n;
int res;
if (lnb < 0)
{
lnb = lnb * -1;
}
while (lnb > 9)
{
lnb  = lnb  % 10;
}
if (lnb <= 9)
{
res = lnb;
}
_putchar(res + 48);
return (res);
}
