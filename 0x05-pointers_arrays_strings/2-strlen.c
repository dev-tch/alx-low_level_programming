#include "main.h"
/**
 * _strlen - get length of string
 * @s: pointer to char
 * Return: int
 */

int _strlen(char *s)
{
int len = 0;
while (*s)
{
len++;
s++;
}
return (len);
}
