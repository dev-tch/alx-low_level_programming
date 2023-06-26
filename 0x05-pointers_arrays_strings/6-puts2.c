#include "main.h"
/**
 * puts2 - print every other character
 *@str: pointer to char
 * Return: void
 */

void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
if (*str == '\0')
break;
str++;
}
_putchar('\n');
}
