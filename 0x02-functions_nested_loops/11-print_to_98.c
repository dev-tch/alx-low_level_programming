#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 *@n: number
 * Return: n
 */
void print_to_98(int n)
{
int i;
if (n == 98)
{
printf("%d\n", n);
return;
}
if (n < 98)
{
for (i = n ; i < 98; i++)
{
printf("%d, ", i);
n++;
}
}
if (n > 98)
{
for (i = n ; i > 98; i--)
{
printf("%d, ", i);
n--;
}
}
printf("%d\n", n);
}
