#include "main.h"
/**
 * _puts - print string followed by new line
 * @str: pointer to char
 * Return: void
 */

void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
