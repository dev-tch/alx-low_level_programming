#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
long  fib1 = 1;
long  fib2 = 2;
long  fib3;
long  fib50;
printf("%ld, ", fib1);
printf("%ld, ", fib2);
for (i = 3 ; i <= 50 ; i++)
{
fib3 = fib2 + fib1;
fib1 = fib2;
fib2 = fib3;

if (i != 50)
printf("%ld, ", fib3);
else
fib50 = fib3;
}
printf("%ld\n", fib50);
return (0);
}
