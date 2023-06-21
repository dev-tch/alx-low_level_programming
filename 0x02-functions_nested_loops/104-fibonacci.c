#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
unsigned long fib1 = 1;
unsigned long fib2 = 2;
unsigned long fib3 = 0;
unsigned long fib98;
printf("%lu, ", fib1);
printf("%lu, ", fib2);
for (i = 3 ; i <= 100 ; i++)
{
fib3 = fib2 + fib1;
fib1 = fib2;
fib2 = fib3;
if (i != 98)
printf("%lu, ", fib3);
else
fib98 = fib3;
}
printf("%lu\n", fib98);
return (0);
}
