#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;
int nb;
for (i = 1 ; i < argc ; i++)
{
nb = atoi(argv[i]);
if (nb == 0)
{
printf("Error\n");
return (1);
}
if (nb > 0)
sum = sum + nb;
}
printf("%d\n", sum);
return (0);
}
