#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argv[argc - 1] != NULL)
printf("%d\n", argc);
return (0);
}
