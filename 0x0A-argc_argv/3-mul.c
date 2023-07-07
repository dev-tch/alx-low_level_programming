#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
int mult = 1;
int nb1  = 1;
int nb2  = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
nb1 = atoi(argv[1]);
nb2 = atoi(argv[2]);
if (nb1 == 0 || nb2 == 0)
{
printf("Error\n");
return (1);
}
mult = nb1 *nb2;
printf("%d\n", mult);
return (0);
}
