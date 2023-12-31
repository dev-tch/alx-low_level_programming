#include "main.h"
/**
 * print_number - print digits of number with _putchar
 *@n: int
 * Return: void
 */
int getBase(int n);
int getBase2(int n);
void print_number(int n)
{
int sign = 0;
int maxbase;
int res;
if (n > 0)
maxbase = getBase(n);
if (n < 0)
{
sign = 1;
maxbase = getBase2(n);
}
if (sign == 1)
{
_putchar('-');
if (n >= -9)
n *= -1;
}
if (n >= 0 && n <= 9)
_putchar(n + '0');
else
{
while ((sign == 0 && maxbase  > 0) || (sign == 1 && maxbase < 0))
{
res = n / maxbase;
_putchar(res + '0');
n = n % maxbase;
maxbase /= 10;
}
}
}

/**
 * getBase - return the most multiple of 10
 *@n: int
 * Return: int
 */


int getBase(int n)
{
int maxbase;
if (n >= 1000000000)
maxbase = 1000000000;
else if (n >= 100000000)
maxbase = 100000000;
else if (n >= 10000000)
maxbase = 10000000;
else if (n >= 1000000)
maxbase = 1000000;
else if (n >= 100000)
maxbase = 100000;
else if (n >= 10000)
maxbase = 10000;
else if (n >= 1000)
maxbase = 1000;
else if (n >= 100)
maxbase = 100;
else
maxbase = 10;
return (maxbase);
}

/**
 * getBase2 - return the most multiple of 10
 *@n: int
 * Return: int
 */


int getBase2(int n)
{
int maxbase;
if (n <= -1000000000)
maxbase = -1000000000;
else if (n <= -100000000)
maxbase = -100000000;
else if (n <= -10000000)
maxbase = -10000000;
else if (n <= -1000000)
maxbase = -1000000;
else if (n <= -100000)
maxbase = -100000;
else if (n <= -10000)
maxbase = -10000;
else if (n <= -1000)
maxbase = -1000;
else if (n <= -100)
maxbase = -100;
else
maxbase = -10;
return (maxbase);
}
