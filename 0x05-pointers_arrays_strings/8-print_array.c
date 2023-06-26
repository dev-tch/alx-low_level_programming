#include <stdio.h>
/**
 * print_array - print n elements of array
 *@a: pointer to int
 *@n: int
 * Return: void
 */

void print_array(int *a, int n)
{
int item, i;
if (n <= 0)
{
printf("\n");
return;
}
for (i = 0 ; i < (n - 1) ; i++)
{
item = *a;
printf("%d, ", item);
a++;
}
item = *a;
printf("%d\n", item);
}

