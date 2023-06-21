#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long  fib1 = 1;
long  fib2 = 2;
long  fib3 = 0;
long  sum = 2;
long  max = 4000000;
while (fib3 <= max)
{
fib3 = fib2 + fib1;
fib1 = fib2;
fib2 = fib3;

if (fib3 % 2 == 0 && fib3 <= max)
sum = sum + fib3;
}
printf("%ld\n", sum);
return (0);
}
