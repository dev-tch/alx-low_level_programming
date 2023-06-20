#include "main.h"

/**
 * print_sign - sign of a number (+/-)
 *@n: input number
 * Return: 0 or -1 or 1
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}

_putchar('0');
return (0);
}
