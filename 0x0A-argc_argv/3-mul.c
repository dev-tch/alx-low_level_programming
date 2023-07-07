#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc < 3)
{
printf("Error\n");
return (1);
}
int mult = 1;
mult = argv[1] * argv[2];
printf("%d\n", mult);
return (0);
}
