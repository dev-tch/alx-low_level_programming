#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_error - Print the error
 * @code: status code to exit
 **/
void print_error(int code)
{
printf("Error\n");
exit(code);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 **/
int main(int argc, char *argv[])
{
int i;
unsigned char *bytes;
if (argc != 2)
print_error(1);
argc = atoi(argv[1]);
if (argc < 0)
print_error(2);
bytes = (unsigned char *) main;
for (i = 0; i < (argc - 1); i++)
{
printf("%.2x%c", bytes[i], ' ');
}
printf("%.2x\n", bytes[argc - 1]);
return (0);
}
