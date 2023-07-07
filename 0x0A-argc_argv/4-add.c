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
char *ptr_at_first_not__digit;
int nb;
for (i = 1 ; i < argc ; i++)
{
nb = strtol(argv[i], &ptr_at_first_not_digit, 10);
if (*ptr_at_first_not_digit)
{
printf("Error\n");
return (1);
}
sum = sum + nb;
}
printf("%d\n", sum);
return (0);
}
